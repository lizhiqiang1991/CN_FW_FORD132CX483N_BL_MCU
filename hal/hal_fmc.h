/******************************************************************************
;				Program		:	hal_fmc.h
;				Function	:	Declare Flexible Memory Controller Function & Variable
;				Chip		:	Cypress CY8C4149AZI-S598
;				Date		:	2021 / 12 / 28
;				Author		:	Fenderson Lu
;				Describe	:
******************************************************************************/
#pragma once
#ifndef HAL_FMC_H
#define HAL_FMC_H
/*---------------------------- Include File ---------------------------------*/
/*---------------------------- Define Constant ------------------------------*/
#if (CY_FLASH_SIZEOF_ROW == 64)
	#define FLASH_ROW_ADDRESS( addr ) (addr & 0xFFFFFFC0)
	#define FLASH_ROW_OFFSET(  addr ) (addr & 0x0000003F)
#elif (CY_FLASH_SIZEOF_ROW == 128)
	#define FLASH_ROW_ADDRESS( addr ) (addr & 0xFFFFFF80)
	#define FLASH_ROW_OFFSET(  addr ) (addr & 0x0000007F)
#elif (CY_FLASH_SIZEOF_ROW == 256)
	#define FLASH_ROW_ADDRESS( addr ) (addr & 0xFFFFFF00)
	#define FLASH_ROW_OFFSET(  addr ) (addr & 0x000000FF)
#elif (CY_FLASH_SIZEOF_ROW == 512)
	#define FLASH_ROW_ADDRESS( addr ) (addr & 0xFFFFFE00)
	#define FLASH_ROW_OFFSET(  addr ) (addr & 0x000001FF)
#else
	#error CY_FLASH_SIZEOF_ROW IS NOT DEFINED OR INVALID
#endif

#define	SIZE_ROW		CY_FLASH_SIZEOF_ROW
/*---------------------------- Declare Function -----------------------------*/
extern cy_en_flashdrv_status_t HAL_FMC_Row_Write(uint32_t u32Address, uint8_t *u8Buff);
extern uint8_t HAL_FMC_Read(uint32_t u32Address, uint8_t *u8CacheBuff, uint32_t u32Len);
extern uint8_t HAL_FMC_Row_Read(uint32_t u32Address, uint8_t *u8CacheBuff);
extern cy_en_flashdrv_status_t HAL_FMC_Row_Erase(uint32_t u32Address);
#endif

