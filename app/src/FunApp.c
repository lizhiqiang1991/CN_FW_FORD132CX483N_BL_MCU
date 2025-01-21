/******************************************************************************
;       Program  : FunApp.c
;       Function : Implement Project Scenario Functions 
;       Chip     : Cypress CYT2B6
;       Clock    :
;       Date     : 2021 / 10 / 08
;       Author   : Joel Wang
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "InitApp.h"
/*---------------------------- Declare External Var --------------------------*/
static uint32_t u32AppAddress = APP_START_ADDR;
//volatile uint32_t *u16UpdateKey = ((volatile uint32_t *)(0x20003F00));
__attribute__((section (".user_RAM"))) uint32_t u16UpdateKey;
const uint8_t u8APPChecker[] = {"APP_Activated"};

/*---------------------------- Start Program ---------------------------------*/

/******************************************************************************
;	Function Name			:	static uint8_t FunApp_App_Crc_Check(uint8_t u8Para)
;	Function Description	:	App memory CRC32 check.
;	Parameters				:	[u8Para] - NOTHING
;	Return Values			:	NOTHING
;	Source ID				:
******************************************************************************/
static uint8_t FunApp_App_Crc_Check(uint8_t u8Para)
{
	if(I2c3SlaveApp_Crc32_Check(TIMES_APP_MEM) == true) // Check APP CRC
	{
		//HAL_UART_Printf("Crc PASS\r\n");
		Cy_SysLib_Delay(1U);
		(void)FlashRwApp_Jump_to_Address(u32AppAddress); // Jump to APP
	}
	else
	{
		//HAL_UART_Printf("Crc ERROR\r\n");
		(void)InitApp_StateMachine_Set(BL_INIT);
		//HAL_UART_Printf("Jump to update process\n");
	}
	(void)(u8Para);
	return u8Para;
}
/*static uint8_t FunApp_App_Crc_Check(uint8_t u8Para) //(TEST_PIN_PORT, TEST_PIN_PIN)
{
	uint8_t u8Counter = 0;
	bool bResult = true;
	uint8_t u8Temp[LEN_READ_MEM];
	//(void)HAL_FMC_Row_Read((uint32_t)(FIXED_FLASH_ACCESS_FLASH_ADDRESS), u8Temp);
	(void)FlashRwApp_Read(((uint32_t)(FIXED_FLASH_ACCESS_FLASH_ADDRESS) + (uint32_t)(ADDR_APP_ACTIVATE_CHECKER)), (uint32_t)(LEN_READ_MEM), &u8Temp[0]);
	for (u8Counter = 0; u8Counter < sizeof(u8APPChecker); u8Counter++)
	{
		bResult = true;
		if (u8Temp[u8Counter] != u8APPChecker[u8Counter])
		{
			bResult = false;
			break;
		}
	}
	if (bResult)
	{
		//HAL_UART_Printf("APP Activated\r\n");
		Cy_SysLib_Delay(1U);
		(void)FlashRwApp_Jump_to_Address(u32AppAddress); // Jump to APP
	}
	else
	{
		if (I2c3SlaveApp_Crc32_Check(TIMES_APP_MEM) == true) // Check APP CRC
		{
			//HAL_UART_Printf("Crc PASS\r\n");
			Cy_SysLib_Delay(1U);
			(void)FlashRwApp_Jump_to_Address(u32AppAddress); // Jump to APP
		}
		else
		{
			//HAL_UART_Printf("Crc ERROR\r\n");
			(void)InitApp_StateMachine_Set(BL_INIT);
			//HAL_UART_Printf("Jump to update process\n");
		}
	}

	(void)(u8Para);
	return u8Para;
}*/

/******************************************************************************
;	Function Name			:	uint8_t FunApp_Startup_Check(uint8_t u8Para)
;	Function Description	:	Check jump to App mode or bootloader mode.
;	Parameters				:	[u8Para] - NOTHING
;	Return Values			:	NOTHING
;	Source ID				:
******************************************************************************/
uint8_t FunApp_Startup_Check(uint8_t u8Para)
{
	//if ((*u16UpdateKey == (uint32_t)(CHK_UPDATE_KEY)) && (CY_SYSLIB_RESET_SOFT & Cy_SysLib_GetResetReason()))
	if ((u16UpdateKey == (uint32_t)(CHK_UPDATE_KEY))&&(/*CY_SYSLIB_RESET_SOFT*/0x10 & Cy_SysLib_GetResetReason()))
	{
		//*u16UpdateKey = (uint16_t)CLR_KEYS;
		u16UpdateKey = (uint16_t)CLR_KEYS;
		(void)InitApp_StateMachine_Set(BL_INIT);
		Cy_SysLib_ClearResetReason();
		//HAL_UART_Printf("Jump to update process\n");
	}
	else
	{
		//HAL_UART_Printf("Jump to crc check\n");
		(void)FunApp_App_Crc_Check(NOTHING);
	}
	(void)(u8Para);
	return u8Para;
}

/*----------------------------------------------------------------------------*/
