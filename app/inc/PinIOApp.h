/******************************************************************************
;       Program		: PinIO.h
;       Function	: Declare GPIO Sensing Function & Variable
;       Chip		: Cypress CY8C4149AZI-S598
;       Clock		: IMO Internal 48MHz
;       Date		: 2021 / 12 / 27
;       Author		: Fenderson Lu
******************************************************************************/
#pragma once
#ifndef PINIO_H
#define PINIO_H
/*---------------------------- Include File ---------------------------------*/
#include "hal_gpio.h"
/*---------------------------- Define Constant ------------------------------*/

#define SYS_PWR_OFF		0U
#define SYS_PWR_ON		1U


enum ShiftBit{
    SHIFT_BIT_0,
    SHIFT_BIT_1,
    SHIFT_BIT_2,
    SHIFT_BIT_3,
    SHIFT_BIT_4,
    SHIFT_BIT_5,
    SHIFT_BIT_6,
    SHIFT_BIT_7,
    SHIFT_BIT_8,
    SHIFT_BIT_9,
    SHIFT_BIT_10,
    SHIFT_BIT_11,
    SHIFT_BIT_12,
    SHIFT_BIT_13,
    SHIFT_BIT_14,
    SHIFT_BIT_15,
    SHIFT_BIT_16,
    SHIFT_BIT_17,
    SHIFT_BIT_18,
    SHIFT_BIT_19,
    SHIFT_BIT_20,
    SHIFT_BIT_21,
    SHIFT_BIT_22,
    SHIFT_BIT_23,
    SHIFT_BIT_24,
    SHIFT_BIT_25,
    SHIFT_BIT_26,
    SHIFT_BIT_27,
    SHIFT_BIT_28,
    SHIFT_BIT_29,
    SHIFT_BIT_30,
    SHIFT_BIT_31,
    SHIFT_BIT_32
};
/*---------------------------- Declare Extern Variable ----------------------*/ 
/*---------------------------- Declare Function -----------------------------*/ 
extern bool PinIOApp_Power_Sequence(uint8_t u8Switch);
extern uint8_t PinIOApp_Init(uint8_t u8Para);

#endif

