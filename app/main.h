/******************************************************************************
;       Program		: main.h
;       Function	: Declare Main Function & Variable
;       Chip		: Cypress CYT2B6
;       Clock		:
;       Date		: 2021 / 10 / 08
;       Author		: Joel Wang
******************************************************************************/
#ifndef MAIN_H
#define MAIN_H
/*---------------------------- Include Library ------------------------------*/
#include <stddef.h>		/* Defines NULL */
#include "public.h"
/*---------------------------- Switch Support Function ----------------------*/
#define		DEBUG_UART			false
#define		WDT_RST				false
#define		BACK_UP				false
/*---------------------------- Define Constant ------------------------------*/
#define 	NOTHING				(uint8_t)(0U)
#define 	YES					0xFFU
#define 	NO					0x00U
#define 	TRUE				0x01U
#define 	FALSE				0x00U
/*---------------------------- Declare Enum ---------------------------------*/
enum StateMachine
{
    BL_STARTUP = 0U,
    BL_INIT = 1U,
    BL_UPDATE = 2U
};

enum Switch{
	DISABLE = 0U,
	ENABLE = 1U
};
/*---------------------------- Declare Function -----------------------------*/
#endif
