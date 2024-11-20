/******************************************************************************
;				Program		:	FlashRw.h
;				Function	:	Declare Flash Access Function & Variable
;				Chip		:	Cypress CY8C4149AZI-S598
;				Date		:	2021 / 12 / 29
;				Author		:	Fenderson Lu
;				Describe	:
******************************************************************************/
#pragma once
#ifndef FLASHRW_H
#define FLASHRW_H

#include "hal_fmc.h"
/*---------------------------- Include File ---------------------------------*/
/*---------------------------- Define Constant ------------------------------*/
#define		SIZE_PAGE				256U

/*---------------------------- Declare Function -----------------------------*/
extern uint8_t FlashRwApp_256B_Page_Compare(uint32_t u32StartAddr, uint8_t *pu8SrcBuff);
uint8_t FlashRwApp_256B_Page_Write(uint32_t u32StartAddr, uint8_t *pu8DataBuff);
extern uint8_t FlashRwApp_Read(uint32_t u32DestAddr, uint32_t u32ReadByteLen, uint8_t *pu8DataBuff);
extern uint8_t FlashRwApp_Row_Erase(uint32_t u32StartAddr);
extern uint8_t FlashRwApp_App_Area_Get(void);
extern uint8_t FlashRwApp_Whether_Update_Get(void);
bool FlashRwApp_Check_Boundary(uint32_t u32Address);
bool FlashRwApp_Jump_to_Address(uint32_t u32Address);
#endif

