
/******************************************************************************
;       Program		: hal_eep.h
;       Function	: Declare main function & variable
;       Chip		: Cypress CY8C4149AZI-S598
;       Clock		: IMO Internal 48MHz
;       Date		:
;       Author		:
******************************************************************************/
#pragma once

#ifndef HAL_EEPROM_H
#define HAL_EEPROM_H

#include "cy_em_eeprom.h"
#include "public.h"

/*---------------------------- Declare Function -----------------------------*/
cy_en_em_eeprom_status_t HAL_EEPROM_Init(void);
cy_en_em_eeprom_status_t HAL_EEPROM_WRITE(uint8_t *u8Data, uint16_t u16Offset, uint16_t u16Length);
cy_en_em_eeprom_status_t HAL_EEPROM_READ(uint8_t *u8Data, uint16_t u16Offset, uint16_t u16Length);

#endif
