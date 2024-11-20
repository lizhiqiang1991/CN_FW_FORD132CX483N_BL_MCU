/******************************************************************************
;				Program		:	FlashRw.c
;				Function	:	Internal Flash Access Function
;				Chip		:	Cypress CY8C4149AZI-S598
;				Date		:	2021 / 12 / 29
;				Author		:	Fenderson Lu
;				Describe	:	CY8C4149AZI-S598 and CY8C4147AZS-S548 a row are 256 bytes.					
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "InitApp.h"
/*---------------------------- Declare Global Variable ----------------------*/
static uint8_t u8AppAreaBuff = 1U;
static uint8_t u8UpdateRequest = 0U;
/*static uint8_t u8Area_A = 1U;
static uint8_t u8Area_B = 2U;*/
/*---------------------------- Start Program --------------------------------*/
/******************************************************************************
;       Function Name			:	uint8_t FlashRwApp_256B_Page_Compare(uint32_t u32StartAddr, uint8_t *pu8SrcBuff)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
uint8_t FlashRwApp_256B_Page_Compare(uint32_t u32StartAddr, uint8_t *pu8SrcBuff)
{
	uint8_t u8Status;
	u8Status = (uint8_t)(STATUS_FINISH);
	uint8_t u8TempData[SIZE_PAGE];
	
	if(HAL_FMC_Row_Read(u32StartAddr, u8TempData) == DRIVER_TRUE)
	{
		for(uint32_t i = 0; i < SIZE_ROW; i++)
		{
	        if(u8TempData[i] != pu8SrcBuff[i])
			{
				u8Status = (uint8_t)(STATUS_FAIL); 	/* Data are not match */
				break;
			}
		}
	}

	(void)(u32StartAddr);
	(void)(*pu8SrcBuff);
	return u8Status;	
}

/******************************************************************************
;       Function Name			:
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
uint8_t FlashRwApp_256B_Page_Write(uint32_t u32StartAddr, uint8_t *pu8DataBuff)
{
	uint8_t u8Status;
	
	if(HAL_FMC_Row_Write(u32StartAddr, pu8DataBuff) == CY_FLASH_DRV_SUCCESS)
	{
		u8Status = FlashRwApp_256B_Page_Compare(u32StartAddr, pu8DataBuff);
	}
    else
    {
		u8Status = (uint8_t)(STATUS_FAIL);
	} 

	return u8Status;
}

/******************************************************************************
;       Function Name			:	uint8_t FlashRwApp_Read(uint32_t u32DestAddr, uint32_t u32ReadByteLen, uint8_t *pu8DataBuff)
;       Function Description	:	Read flash memory, , the maximum range are 256 bytes.
;       Parameters				:	[u32DestAddr] - Set destination address.
;									[u32ReadByteLen] - Set read's length.
;									[*pu8DataBuff] - Input data.
;       Return Values			:	Return status.
;									(1) NVC_FINISH
;									(2) NVC_FAIL
;		Source ID				:	
******************************************************************************/
uint8_t FlashRwApp_Read(uint32_t u32DestAddr, uint32_t u32ReadByteLen, uint8_t *pu8DataBuff)
{
    uint8_t u8Status;
    
    if(HAL_FMC_Read(u32DestAddr, pu8DataBuff, u32ReadByteLen) == DRIVER_TRUE)
    {
    	u8Status = NVC_FINISH;
    }
    else
    {
    	u8Status = NVC_FAIL;
    }

	return u8Status;
}

/******************************************************************************
;       Function Name			:	
;       Function Description	:	Erase 256 bytes flash memory.
;       Parameters				:	[u32StartAddr] - Set start address.
;									[u32PageShift] - Set erase page.
;       Return Values			:	Return status.
;									(1) NVC_FINISH
;									(2) NVC_FAIL
;		Source ID				:
******************************************************************************/
uint8_t FlashRwApp_Row_Erase(uint32_t u32StartAddr)
{
    uint8_t u8Status;
  	
    if (HAL_FMC_Row_Erase(u32StartAddr) == CY_FLASH_DRV_SUCCESS)
    {
        u8Status = (uint8_t)(NVC_FINISH);
    }
    else
    {
        u8Status = (uint8_t)(NVC_FAIL);
    }
  
	return u8Status;
}

/******************************************************************************
;       Function Name			:	uint8_t FlashRwApp_App_Area_Get(void)
;       Function Description	:	
;       Parameters				:	
;       Return Values			:	
;		Source ID				:
******************************************************************************/
uint8_t FlashRwApp_App_Area_Get(void)
{
    return u8AppAreaBuff;
}

/******************************************************************************
;       Function Name			:	uint8_t FlashRwApp_Whether_Update_Get(void)
;       Function Description	:	
;       Parameters				:	
;       Return Values			:	
;		Source ID				:
******************************************************************************/
uint8_t FlashRwApp_Whether_Update_Get(void)
{
    return u8UpdateRequest;
}

/******************************************************************************
;       Function Name			:	void FlashRwApp_Change_App_Update_Area(void)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
bool FlashRwApp_Check_Boundary(uint32_t u32Address)
{
	 bool bReturn;
	 if (u32Address < 0x00020000)  /*4147 128K Flash size = 0x20000*/
	 {
		 bReturn = true;
	 }
	 else
	 {
		 bReturn = false;
	 }
	 return bReturn;
}
/******************************************************************************
;       Function Name			:	  static void FlashRwApp_Jump_UserApp(uint32_t stackPtr, uint32_t rstAddr)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
 static void FlashRwApp_Jump_UserApp(uint32_t stackPtr, uint32_t rstAddr)
 {
        __asm volatile("    MSR msp, %[sp]\n"
                       "    BX %[address] \n" : : [sp]"r"(stackPtr), [address]"r"(rstAddr): );
 }
 /******************************************************************************
 ;       Function Name			:	   uint8_t FlashRwApp_Jump_to_Address(uint32_t u32Address)
 ;       Function Description	:
 ;       Parameters				:
 ;       Return Values			:
 ;		Source ID				:
 ******************************************************************************/
 bool FlashRwApp_Jump_to_Address(uint32_t u32Address)
 {
     bool bReturn;
     if (FlashRwApp_Check_Boundary(u32Address) == true)
     {
         uint32_t *pMSP = (uint32_t *)u32Address;
         uint32_t *pResetVector = (uint32_t *)u32Address;

         /* Start by disabling interrupts, before changing interrupt vectors*/
         __disable_irq();

         /*Set vector table offset*/
         SCB->VTOR = u32Address;

         /*Set address for RESET*/
         pResetVector++;
         FlashRwApp_Jump_UserApp( *pMSP, *pResetVector);

         /*Won't reach here */
         bReturn = true;
     }
     else
     {
    	 bReturn = false;
     }

     return bReturn;
 }

/*---------------------------------------------------------------------------*/
