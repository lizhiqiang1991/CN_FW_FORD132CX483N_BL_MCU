/******************************************************************************
;       Program		: I2c3SlaveApp.c
;       Function	: Declear SERCOM0 I2C Slave Application Function
;       Chip		: Cypress CYT2B6
;       Clock		:
;       Date		: 2021 / 10 / 08
;       Author		: Joel Wang
;       Describe	: Use SERCOM0 for I2C Slave
;			  I2C_SDA_PA08 = SERCOM0/PAD[0]
;			  I2C_SCL_PA09 = SERCOM0/PAD[1]
;			  [Function Requirements]
;			  1. The ECU is disabled program flash in the SM_UPDATE state when battery voltage is under 9V for SGM.
;			  2. The ECU don't into SM_UPDATE state when battery voltage is under 9V for SGM.
;			  3. CRC32 calculate address range are 0x0000 ~ 0xFFDF. (APP=64KB, deduct CustomerID, MCU VER, CRC32)
;			  4. I2C slave frequency set 1MHz.
;			  5. I2C protocol packets is LSB (Low Byte) first.
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "InitApp.h"
#include "cy_device_headers.h"
/*---------------------------- Declare External Var -------------------------*/
static st_queue tsI2cSlaveRx;

static uint8_t u8AppMemRawDataBuff[SIZE_APP_MEM_BLOCK] = {0};
static uint8_t u8AppCrc32Buff[LEN_APP_CRC32] = {0};
static uint32_t u32ComputeCrc32 = (uint32_t)(INIT_CRC32);

static uint8_t rxBuffer[I2CS_WBUFFER_SIZE + 1U] = {NUM_ZERO}; /* Declaration of the Slave LPI2C RX buffer for Master Write*/
static uint8_t txBuffer[I2CS_RBUFFER_SIZE] = {NUM_ZERO};	  /* Declaration of the Slave LPI2C TX buffer for Master Read*/

static uint8_t WriteBuffer[I2CS_WBUFFER_SIZE + 1U] = {NUM_ZERO};

static uint8_t u8retMsg[2];
static uint16_t u16CalculateChecksum = 0U;
static uint16_t u16DataChecksum = 0U;
static uint8_t u8checksum_reset = 0U;
static uint16_t u16SerialID;

static uint8_t u8BootloaderStatusFlag = (uint8_t)(DEFAULT_BL_STATUS); /* default is BL mode */
static bool gbResetFlag = false;
/*------------------- u8BootloaderStatusFlag ----------------
Bit7 : Bootloader whether receive check update status event, 0 = not receive, 1 = event trigger.
Bit6 : Bootloader whether receive program event, 0 = not receive, 1 = event trigger.
Bit5 : Bootloader whether receive erase event, 0 = not receive, 1 = event trigger.
Bit4 : 0 = Bootloader execute update area APP1, 1 = Bootloader execute update area APP2.
Bit3 : 0 = Bootloader not finish update process, 1 = Bootloader update APP memory success.
Bit2 : 0 = Bootloader not program APP memory yet, 1 = Bootloader program APP memory and receive checksum_all is correct.
Bit1 : 0 = Bootloader not receive erase command, 1 = Bootloader erase APP region ready.
Bit0 : 0 = Bootloader not receive handshake command, 1 = Bootloader agree handshake.
------------------------------------------------------------*/

/*---------------------------- Start Program --------------------------------*/
/******************************************************************************
;       Function Name			:	uint8_t I2c3SlaveApp_BL_Status_Set(uint8_t u8Status)
;       Function Description	:	Set bootloader status 1 flags information and trigger IRQ signal.
;       Parameters				:	[u8Status] - Set bootloader flags. 
;       Return Values			:	Return bootloader status 1 information.
;		Source ID				:
******************************************************************************/
uint8_t I2c3SlaveApp_BL_Status_Set(uint8_t u8Status)
{
	u8BootloaderStatusFlag |= u8Status;

	return u8BootloaderStatusFlag;
}

/******************************************************************************
;       Function Name			:	bool I2c3SlaveApp_Crc32_Check(uint32_t u32Size)
;       Function Description	:	Compute and check MCU flash CRC32 values.
;       Parameters				:	[u32Size] - Input App memory size.
;       Return Values			:	Return CRC32 check status.
;									(1) true - CRC32 check is correct.
;									(2) false - CRC32 check is failure.
;		Source ID				:
******************************************************************************/
bool I2c3SlaveApp_Crc32_Check(uint32_t u32Size)
{
	//HAL_GPIO_High(TEST_PIN_PORT, TEST_PIN_PIN);
	bool bCheck = false;
	uint32_t u32Index, u32AppCrc32;
	uint16_t u16CrcH, u16CrcL;

	for (u32Index = 0U; u32Index < u32Size; u32Index++) /* Calculate APP memory size CRC32,  APP_SIZE/A_PAGE = timers */
	{
		(void)FlashRwApp_Read((uint32_t)(ADDR_APP_START) + (u32Index * (uint32_t)(LEN_READ_MEM)), (uint32_t)(LEN_READ_MEM), &u8AppMemRawDataBuff[0]);
		if (u32Index == (u32Size - 1U)) /* Reserved for CustomerId, MCU Version and MCU CRC32 */
		{
			u32ComputeCrc32 = CrcApp_Crc32_Calculation(&u8AppMemRawDataBuff[0], (uint32_t)(LEN_READ_MEM - LEN_RESERVED), u32ComputeCrc32);
		}
		else
		{
			u32ComputeCrc32 = CrcApp_Crc32_Calculation(&u8AppMemRawDataBuff[0], (uint32_t)(LEN_READ_MEM), u32ComputeCrc32);
		}
	}

	u32ComputeCrc32 = (~u32ComputeCrc32);

	/* Get APP CRC32 Value */
	(void)FlashRwApp_Read(ADDR_APP_CRC32, LEN_APP_CRC32, u8AppCrc32Buff);

	u16CrcH = ((uint16_t)(u8AppCrc32Buff[0]) << (uint16_t)(SHIFT_BIT_8)) | (uint16_t)(u8AppCrc32Buff[1]);
	u16CrcL = ((uint16_t)(u8AppCrc32Buff[2]) << (uint16_t)(SHIFT_BIT_8)) | (uint16_t)(u8AppCrc32Buff[3]);
	u32AppCrc32 = ((uint32_t)(u16CrcH) << (uint32_t)(SHIFT_BIT_16)) | (uint32_t)(u16CrcL);

	HAL_UART_Printf("u32ComputeCrc32 = 0x%x ,u32AppCrc32 = 0x%x\r\n", u32ComputeCrc32, u32AppCrc32);

	/* Compare APP Crc32 */
	if (u32ComputeCrc32 != u32AppCrc32)
	{
		bCheck = false; /* CRC32 fail */
	}
	else
	{
		if (u32ComputeCrc32 != 0xffffffff)
		{
			bCheck = true; /* CRC32 pass */
		}
		else
		{
			bCheck = false; /* CRC32 fail */
		}
	}
	//HAL_GPIO_Low(TEST_PIN_PORT, TEST_PIN_PIN);
	(void)(u32Size);
	return bCheck;
}

/********************************************************
0xEn/Fn Cmd packet:
				   |-------------- Len --------------|
		+--------------------------------------------+
		|  CMD_ID  |   Len   |  Data[n]  | Checksum  |
		+--------------------------------------------+
		|    1 B   |    1B   |    n B    |    1 B    |
		+--------------------------------------------+
		|---------   checksum   ---------|

0xE7 Data packet:
				   |--------------------- Len ---------------------|
		+----------------------------------------------------------+
		|  CMD_ID  |   Len   |  serial id  |  Data[n]  | Checksum  |
		+----------------------------------------------------------+
		|    1 B   |    1B   |     2 B     |    n B    |    1 B    |
		+----------------------------------------------------------+
		|----------------   checksum   ----------------|		
		CMD_ID 		: 	0xEn / 0xFn
						0xE7	: update date packet 
						0xF7	: Response od 0xE7
						0xE8	: Whole date packet checksum 
						0xF8	: Response od 0xE8

		Checksum 	:	(8 bit add sum)[from CMD_ID to Data] +1 
		Len 		:	Byte count from Len to Checksum
		Data[n]		:	Up to 128 bytes

 		
********************************************************/

/******************************************************************************
;       Function Name			:	static bool I2c3SlaveApp_Rx_Checksum_Check(void)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
static bool I2c3SlaveApp_Rx_Checksum_Check(void)
{
	bool bCheck = true;
	uint8_t u8checksum = 0;
	u8checksum = CrcApp_CalculateCheckSum8((uint8_t *)rxBuffer, tsI2cSlaveRx.length - 1);
	if (u8checksum == tsI2cSlaveRx.buf[tsI2cSlaveRx.length - 1])
	{
		bCheck = true;
	}
	else
	{
		bCheck = false;
	}
	return bCheck;
}

/******************************************************************************
;       Function Name			:	static bool I2c3SlaveApp_Prepare_Response_Buf(uint8_t u8cmd, uint8_t u8datalen, uint8_t* u8buf)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
static bool I2c3SlaveApp_Prepare_Response_Buf(uint8_t u8cmd, uint8_t u8datalen, uint8_t *u8buf)
{
	uint8_t u8ret;
	uint8_t u8checksum_pos = u8datalen;

	if (u8datalen > BUFFER_RES_MAX)
	{
		u8ret = false;
	}
	else
	{
		txBuffer[OFFSET_CMD] = u8cmd;
		txBuffer[OFFSET_LEN] = u8datalen;

		for (int i = 0; i < (u8datalen - 2); i++)
		{
			txBuffer[OFFSET_DAT + i] = u8buf[i];
		}

		txBuffer[u8checksum_pos] = CrcApp_CalculateCheckSum8((uint8_t *)txBuffer, u8datalen);
		u8ret = true;
	}
	return u8ret;
}

/******************************************************************************
;       Function Name			:	void I2c3SlaveApp_Update_Cmd_Process(void)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
void I2c3SlaveApp_Update_Cmd_Process(void)
{
	uint8_t u8Cmd;
	u8Cmd = tsI2cSlaveRx.buf[UPDATE_CMD];

	if (tsI2cSlaveRx.length > 0)
	{
		switch (u8Cmd)
		{
		case CMD_UPDATE_REQUEST:
			/*Now is already in bootloader, should not receive this cmd*/
			u8retMsg[0] = 0x7F;
			I2c3SlaveApp_Prepare_Response_Buf(CMD_UPDATE_ACK, LEN_UPDATE_ACK, u8retMsg);
			break;
		case CMD_BOOTLOADER_HS:
			if (I2c3SlaveApp_Rx_Checksum_Check() == true)
			{
				u8retMsg[0] = 0x43;
				u8BootloaderStatusFlag |= (uint8_t)SET_BL_HANDSHAKE;
			}
			else
			{
				u8retMsg[0] = 0x7F;
			}

			I2c3SlaveApp_Prepare_Response_Buf(CMD_BOOTLOADER_HS_ACK, LEN_BOOTLOADER_HS_ACK, u8retMsg);
			break;

		case CMD_ERASE_REQUEST:
			if ((I2c3SlaveApp_Rx_Checksum_Check() == true) && ((u8BootloaderStatusFlag & 0x01U) == (uint8_t)SET_BL_HANDSHAKE))
			{
				u8retMsg[0] = 0x43;
				u8BootloaderStatusFlag |= (uint8_t)SET_APP_ERASE_EVENT;
				// reset checksum value caculate
				u8checksum_reset = 1;
			}
			else
			{
				u8retMsg[0] = 0x7F;
			}
			I2c3SlaveApp_Prepare_Response_Buf(CMD_ERASE_REQUEST_ACK, LEN_ERASE_REQUEST_ACK, u8retMsg);
			break;

		case CMD_APP_PROGRAM:
			if ((I2c3SlaveApp_Rx_Checksum_Check() == true) && ((u8BootloaderStatusFlag & 0x03U) == ((uint8_t)SET_BL_HANDSHAKE | (uint8_t)SET_APP_ERASE)))
			{
				u16SerialID = ((tsI2cSlaveRx.buf[OFFSET_DAT] << 8U) | tsI2cSlaveRx.buf[OFFSET_DAT + 1]);
				if ((u16SerialID > 0x0000U) && (u16SerialID < 0x0201U))
				{
					u8retMsg[0] = tsI2cSlaveRx.buf[OFFSET_DAT];
					u8retMsg[1] = tsI2cSlaveRx.buf[OFFSET_DAT + 1U];
					u8BootloaderStatusFlag |= (uint8_t)SET_APP_PROGRAM_EVENT;

					CrcApp_CalculateAllDataCheckSum16((uint8_t *)tsI2cSlaveRx.buf, tsI2cSlaveRx.length - 5, u8checksum_reset);
					u8checksum_reset = 0;
				}
				else
				{
					u8retMsg[0] = 0xFFU;
					u8retMsg[1] = 0xFFU;
				}
			}
			else
			{
				u8retMsg[0] = 0xFFU;
				u8retMsg[1] = 0xFFU;
			}
			I2c3SlaveApp_Prepare_Response_Buf(CMD_APP_PROGRAM_ACK, LEN_APP_PROGRAM_ACK, u8retMsg);
			break;

		case CMD_APP_CHECKSUM:
			if (I2c3SlaveApp_Rx_Checksum_Check() == true)
			{
				u16CalculateChecksum = CrcApp_GetCheckSum16();
				u16DataChecksum = (tsI2cSlaveRx.buf[OFFSET_DAT] << 8U) | (tsI2cSlaveRx.buf[OFFSET_DAT + 1U]);
				if (u16CalculateChecksum == u16DataChecksum)
				{
					u8retMsg[0] = 0U; // check pass
					u8BootloaderStatusFlag |= (uint8_t)SET_APP_CHECKSUM_SUCCESS;
				}
				else
				{
					u8retMsg[0] = 1U; // check fail
				}
			}
			else
			{
				u8retMsg[0] = 1U; // check fail
			}
			I2c3SlaveApp_Prepare_Response_Buf(CMD_APP_CHECKSUM_ACK, LEN_APP_CHECKSUM_ACK, u8retMsg);
			break;

		case CMD_UPDATE_STATUS:
			if (I2c3SlaveApp_Rx_Checksum_Check() == true)
			{
				u8BootloaderStatusFlag |= (uint8_t)SET_UPDATE_STATUS_EVENT;
				if ((u8BootloaderStatusFlag & 0x07U) == (((uint8_t)SET_BL_HANDSHAKE | (uint8_t)SET_APP_ERASE) | (uint8_t)SET_APP_CHECKSUM_SUCCESS))
				{
					if (I2c3SlaveApp_Crc32_Check(TIMES_APP_MEM) == true) /* Check APP CRC */
					{
						u8retMsg[0] = 0U;
						u8BootloaderStatusFlag |= (uint8_t)SET_UPDATE_SUCCESS;
					}
					else
					{
						u8retMsg[0] = 1U;
					}
				}
				else
				{
					u8retMsg[0] = 1U;
				}
			}
			else
			{
				u8retMsg[0] = 1U;
			}
			I2c3SlaveApp_Prepare_Response_Buf(CMD_UPDATE_STATUS_ACK, LEN_UPDATE_STATUS_ACK, u8retMsg);
			break;

		case USER_CMD_STATUS:
			if (I2c3SlaveApp_Rx_Checksum_Check() == true)
			{
				u8retMsg[0] = u8BootloaderStatusFlag;
			}
			else
			{
				u8retMsg[0] = 0xFFU;
			}
			I2c3SlaveApp_Prepare_Response_Buf(CMD_USER_CMD_STATUS_ACK, LEN_UPDATE_STATUS_ACK, u8retMsg);
			break;

		case CMD_UPDATE_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_UPDATE_ACK + SUBADDR_ID);
			break;

		case CMD_BOOTLOADER_HS_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_BOOTLOADER_HS_ACK + SUBADDR_ID);
			break;

		case CMD_ERASE_REQUEST_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_ERASE_REQUEST_ACK + SUBADDR_ID);
			break;

		case CMD_APP_PROGRAM_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_APP_PROGRAM_ACK + SUBADDR_ID);
			break;

		case CMD_APP_CHECKSUM_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_APP_CHECKSUM_ACK + SUBADDR_ID);
			break;

		case CMD_UPDATE_STATUS_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_UPDATE_STATUS_ACK + SUBADDR_ID);
			gbResetFlag = true;
			break;

		case CMD_USER_CMD_STATUS_ACK:
			HAL_I2C_MS_TxBuf_Config(txBuffer, LEN_USER_CMD_STATUS_ACK + SUBADDR_ID);
			break;

		default:;
			break;
		}
		tsI2cSlaveRx.length = 0U;
	}
	else
	{
		;
	}
}

/******************************************************************************
;       Function Name			:	void I2c3SlaveApp_Flash_Operate_Process(void)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
void I2c3SlaveApp_Flash_Operate_Process(void)
{
	if ((u8BootloaderStatusFlag & 0x20U) == (uint8_t)SET_APP_ERASE_EVENT)
	{
		u8BootloaderStatusFlag &= ~(uint8_t)SET_APP_ERASE_EVENT;
		for (uint32_t u32Index = 0U; u32Index < LEN_ERASE; u32Index++)
		{
			(void)FlashRwApp_Row_Erase((uint32_t)ADDR_APP_START + (u32Index * 0x100U));
		}
		u8BootloaderStatusFlag |= (uint8_t)SET_APP_ERASE;
		HAL_UART_Printf("Erase command success!\r\n");
	}

	if ((u8BootloaderStatusFlag & 0x40U) == (uint8_t)SET_APP_PROGRAM_EVENT)
	{
		uint32_t u32FlashWriteAddr;

		u8BootloaderStatusFlag &= ~(uint8_t)SET_APP_PROGRAM_EVENT;

		if (u16SerialID % 2 == 0)
		{
			(void)memcpy((uint8_t *)&WriteBuffer[128], &tsI2cSlaveRx.buf[4], 128);
			u32FlashWriteAddr = (uint32_t)ADDR_APP_START + ((u16SerialID - 2U) << 7U);
			FlashRwApp_256B_Page_Write(u32FlashWriteAddr, (uint8_t *)&WriteBuffer[0]);
		}
		else
		{
			(void)memcpy((uint8_t *)&WriteBuffer[0], &tsI2cSlaveRx.buf[4], 128);
		}

		//HAL_UART_Printf("Package = %d\r\n", u16SerialID);
	}

	if (((u8BootloaderStatusFlag & 0x80U) == (uint8_t)SET_UPDATE_STATUS_EVENT) && (gbResetFlag == true))
	{
		u8BootloaderStatusFlag = (uint8_t)(DEFAULT_BL_STATUS);
		Cy_SysLib_Delay(20);
		InitApp_Startup_DeInit();
	}
}

/******************************************************************************
;       Function Name			:	static void Scb_I2C_Slave_Event(uint32_t u32Events)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
static void Scb_I2C_Slave_Event(uint32_t u32Events)
{
	switch (u32Events)
	{
	case CY_SCB_I2C_SLAVE_READ_EVENT:
		break;

	case CY_SCB_I2C_SLAVE_WRITE_EVENT:
		break;

	case CY_SCB_I2C_SLAVE_RD_IN_FIFO_EVENT:
		break;

	case CY_SCB_I2C_SLAVE_RD_BUF_EMPTY_EVENT:
		break;

	case CY_SCB_I2C_SLAVE_ERR_EVENT:
		break;

	case CY_SCB_I2C_SLAVE_RD_CMPLT_EVENT:
		break;

	case CY_SCB_I2C_SLAVE_WR_CMPLT_EVENT:
		(void)memcpy((uint8_t *)&tsI2cSlaveRx.buf[0], &rxBuffer[0], HAL_I2C_MS_RxTransferCount_Get());
		tsI2cSlaveRx.length = HAL_I2C_MS_RxTransferCount_Get();

		I2c3SlaveApp_Update_Cmd_Process();

		HAL_I2C_MS_RxBuf_Config(rxBuffer, I2CS_WBUFFER_SIZE + 1U);
		break;

	default:;
		break;
	}
}

/******************************************************************************
;       Function Name			:	uint8_t I2c3SlaveApp_Init(uint8_t u8Para)
;       Function Description	:	Initialize I2C slave function.
;       Parameters				:	[u8Para] - NOTHING
;       Return Values			:	NOTHING
;		Source ID				:
******************************************************************************/
uint8_t I2c3SlaveApp_Init(uint8_t u8Para)
{
	i2c_master_slave_typedef tI2CMS;

	tI2CMS.pBase = I2C_COM_HW;
	tI2CMS.pConfig = &I2C_COM_config;
	tI2CMS.tSysint.intrSrc = I2C_COM_IRQ;
	tI2CMS.tSysint.intrPriority = 3U;
	tI2CMS.pCallback = (cy_cb_scb_i2c_handle_events_t)Scb_I2C_Slave_Event;

	(void)HAL_I2C_MS_Init(tI2CMS, txBuffer, I2CS_RBUFFER_SIZE, rxBuffer, I2CS_WBUFFER_SIZE);

	(void)(u8Para);
	return u8Para;
}

/*------------------------------------------------------------------------*/
