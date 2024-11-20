/******************************************************************************
;       Program		: public.h
;       Function	:
;       Chip		: Cypress CY8C4149AZI-S598
;       Clock		: IMO Internal 48MHz
;       Date		: 2021 / 10 / 07
;       Author		:
******************************************************************************/
#pragma once

#ifndef PUBLIC_H
#define PUBLIC_H
/*---------------------------- Include File ---------------------------------*/
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include "cy_pdl.h"
#include "cybsp.h"
#include "cycfg_pins.h"
#include "hal_gpio.h"
#include "hal_i2c_master_slave.h"
#include "hal_systick.h"
#include "hal_uart.h"

#include "CRC8.h"
#include "Common.h"

/*---------------------------- Definition -----------------------------------*/
#define DRIVER_FALSE 0x00U
#define DRIVER_TRUE 0x01U

#define LOW_NIBBLE_MASK 0x00FFU
#define HI_NIBBLE_MASK 0xFF00U

#define NUMBER_ZERO 0x00U

#define LOW_LEVEL 0x00U
#define HIGH_LEVEL 0x01U

#define POWER_PASS							0x00U
#define P1V2_FAIL							0x01U
#define P3V3_FAIL							0x02U
#define POWER_CMD_FAIL						0x03U

#define STATUS_FINISH 0U
#define STATUS_FAIL 1U
#define STATUS_WAIT 2U
#define STATUS_BUSY 3U

#endif
