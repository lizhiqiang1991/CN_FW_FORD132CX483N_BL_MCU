/******************************************************************************
;				Program		:	hal_fmc.c
;				Function	:	Flexible Memory Controller Function
;				Chip		:	Cypress CY8C4149AZI-S598
;				Date		:	2021 / 12 / 28
;				Author		:	Fenderson Lu
;				Describe	:	[A Row Unit]
;								CY8C4149AZI-S598 are 256 bytes.
;								CY8C4147AZS-S548 are 256 bytes.					
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "main.h"
#include "hal_fmc.h"
/*---------------------------- Declare Global Variable ----------------------*/
static uint8_t u8FlashCache[SIZE_ROW];
static uint8_t u8FlashEraseCache[SIZE_ROW];
/*---------------------------- Start Program --------------------------------*/
/******************************************************************************
;       Function Name			:	cy_en_flashdrv_status_t HAL_FMC_Row_Write(uint32_t u32Address, uint8_t *u8Buff)
;       Function Description	:	Write a row memories.
;       Parameters				:	
;       Return Values			:	Success is reutn CY_FLASH_DRV_SUCCESS
;									Failure is return CY_FLASH_DRV_ERROR_UNKNOWN
;		Source ID				:
******************************************************************************/
cy_en_flashdrv_status_t HAL_FMC_Row_Write(uint32_t u32Address, uint8_t *u8Buff)
{
	cy_en_flashdrv_status_t tResult;
		
	memcpy((void *)u8FlashCache, (void *) FLASH_ROW_ADDRESS( u32Address ), SIZE_ROW);
	memcpy(u8FlashCache, u8Buff, SIZE_ROW);				
	tResult = Cy_Flash_WriteRow( u32Address, (uint32_t *)u8FlashCache );

	return tResult;
}

/******************************************************************************
;       Function Name			:	uint8_t HAL_FMC_Read(uint32_t u32Address, uint8_t *u8CacheBuff, uint32_t u32Len)
;       Function Description	:	Read memory.
;       Parameters				:	
;       Return Values			:	
;		Source ID				:
******************************************************************************/
uint8_t HAL_FMC_Read(uint32_t u32Address, uint8_t *u8CacheBuff, uint32_t u32Len)
{
	memcpy((void *)u8CacheBuff, (void *) u32Address, u32Len);	//FLASH_ROW_ADDRESS(u32Address)
	return DRIVER_TRUE;
}

/******************************************************************************
;       Function Name			:	void HAL_FMC_Row_Read(uint32_t u32Address)
;       Function Description	:	Read a row memory.
;       Parameters				:	
;       Return Values			:	
;		Source ID				:
******************************************************************************/
uint8_t HAL_FMC_Row_Read(uint32_t u32Address, uint8_t *u8CacheBuff)
{
	memcpy((void *)u8CacheBuff, (void *) FLASH_ROW_ADDRESS(u32Address), SIZE_ROW);
	return DRIVER_TRUE;
}

/******************************************************************************
;       Function Name			:	cy_en_flashdrv_status_t HAL_FMC_Row_Erase(uint32_t u32Address)
;       Function Description	:	Erase a row memories.  
;       Parameters				:	
;       Return Values			:	Success is reutn CY_FLASH_DRV_SUCCESS
;									Overflow is return return CY_FLASH_DRV_DEV_NOT_SUPPORTED
;		Source ID				:
******************************************************************************/
cy_en_flashdrv_status_t HAL_FMC_Row_Erase(uint32_t u32Address)
{
	cy_en_flashdrv_status_t tResult;
		
	memcpy((void *)u8FlashCache, (void *) FLASH_ROW_ADDRESS( u32Address ), SIZE_ROW);
	memcpy(u8FlashCache, &u8FlashEraseCache[0], SIZE_ROW);				
	tResult = Cy_Flash_WriteRow(u32Address, (uint32_t *)u8FlashCache);

	return tResult;
}
/*---------------------------------------------------------------------------*/

