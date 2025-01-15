/*******************************************************************************
 * File Name: cycfg_pins.h
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.30.0
 * device-db 4.20.0.7450
 * mtb-pdl-cat2 2.14.0.14518
 *
 *******************************************************************************
 * Copyright 2025 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define U301_MASTER_SCL_ENABLED 1U
#define U301_MASTER_SCL_PORT GPIO_PRT0
#define U301_MASTER_SCL_PORT_NUM 0U
#define U301_MASTER_SCL_PIN 4U
#define U301_MASTER_SCL_NUM 4U
#define U301_MASTER_SCL_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define U301_MASTER_SCL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_4_HSIOM
    #define ioss_0_port_0_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_MASTER_SCL_HSIOM ioss_0_port_0_pin_4_HSIOM
#define U301_MASTER_SCL_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define U301_MASTER_SCL_HAL_PORT_PIN P0_4
#define U301_MASTER_SCL P0_4
#define U301_MASTER_SCL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_MASTER_SCL_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define U301_MASTER_SCL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define U301_MASTER_SDA_ENABLED 1U
#define U301_MASTER_SDA_PORT GPIO_PRT0
#define U301_MASTER_SDA_PORT_NUM 0U
#define U301_MASTER_SDA_PIN 5U
#define U301_MASTER_SDA_NUM 5U
#define U301_MASTER_SDA_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define U301_MASTER_SDA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_5_HSIOM
    #define ioss_0_port_0_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_MASTER_SDA_HSIOM ioss_0_port_0_pin_5_HSIOM
#define U301_MASTER_SDA_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define U301_MASTER_SDA_HAL_PORT_PIN P0_5
#define U301_MASTER_SDA P0_5
#define U301_MASTER_SDA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_MASTER_SDA_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define U301_MASTER_SDA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define U301_P1V2_EN_ENABLED 1U
#define U301_P1V2_EN_PORT GPIO_PRT0
#define U301_P1V2_EN_PORT_NUM 0U
#define U301_P1V2_EN_PIN 6U
#define U301_P1V2_EN_NUM 6U
#define U301_P1V2_EN_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define U301_P1V2_EN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_0_pin_6_HSIOM
    #define ioss_0_port_0_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_P1V2_EN_HSIOM ioss_0_port_0_pin_6_HSIOM
#define U301_P1V2_EN_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define U301_P1V2_EN_HAL_PORT_PIN P0_6
#define U301_P1V2_EN P0_6
#define U301_P1V2_EN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_P1V2_EN_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_P1V2_EN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_P1V2_PGOOD_ENABLED 1U
#define U301_P1V2_PGOOD_PORT GPIO_PRT0
#define U301_P1V2_PGOOD_PORT_NUM 0U
#define U301_P1V2_PGOOD_PIN 7U
#define U301_P1V2_PGOOD_NUM 7U
#define U301_P1V2_PGOOD_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_P1V2_PGOOD_INIT_DRIVESTATE 0
#ifndef ioss_0_port_0_pin_7_HSIOM
    #define ioss_0_port_0_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_P1V2_PGOOD_HSIOM ioss_0_port_0_pin_7_HSIOM
#define U301_P1V2_PGOOD_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define U301_P1V2_PGOOD_HAL_PORT_PIN P0_7
#define U301_P1V2_PGOOD P0_7
#define U301_P1V2_PGOOD_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_P1V2_PGOOD_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_P1V2_PGOOD_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define TEST_PIN_ENABLED 1U
#define TEST_PIN_PORT GPIO_PRT1
#define TEST_PIN_PORT_NUM 1U
#define TEST_PIN_PIN 0U
#define TEST_PIN_NUM 0U
#define TEST_PIN_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define TEST_PIN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_1_pin_0_HSIOM
    #define ioss_0_port_1_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define TEST_PIN_HSIOM ioss_0_port_1_pin_0_HSIOM
#define TEST_PIN_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define TEST_PIN_HAL_PORT_PIN P1_0
#define TEST_PIN P1_0
#define TEST_PIN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define TEST_PIN_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define TEST_PIN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define PTC2_ENABLED 1U
#define PTC2_PORT GPIO_PRT1
#define PTC2_PORT_NUM 1U
#define PTC2_PIN 1U
#define PTC2_NUM 1U
#define PTC2_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PTC2_INIT_DRIVESTATE 0
#ifndef ioss_0_port_1_pin_1_HSIOM
    #define ioss_0_port_1_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define PTC2_HSIOM ioss_0_port_1_pin_1_HSIOM
#define PTC2_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define PTC2_HAL_PORT_PIN P1_1
#define PTC2 P1_1
#define PTC2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define PTC2_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define PTC2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_COM_SCL_ENABLED 1U
#define U301_COM_SCL_PORT GPIO_PRT1
#define U301_COM_SCL_PORT_NUM 1U
#define U301_COM_SCL_PIN 2U
#define U301_COM_SCL_NUM 2U
#define U301_COM_SCL_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define U301_COM_SCL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_2_HSIOM
    #define ioss_0_port_1_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_COM_SCL_HSIOM ioss_0_port_1_pin_2_HSIOM
#define U301_COM_SCL_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define U301_COM_SCL_HAL_PORT_PIN P1_2
#define U301_COM_SCL P1_2
#define U301_COM_SCL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_COM_SCL_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define U301_COM_SCL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define U301_COM_SDA_ENABLED 1U
#define U301_COM_SDA_PORT GPIO_PRT1
#define U301_COM_SDA_PORT_NUM 1U
#define U301_COM_SDA_PIN 3U
#define U301_COM_SDA_NUM 3U
#define U301_COM_SDA_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define U301_COM_SDA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_3_HSIOM
    #define ioss_0_port_1_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_COM_SDA_HSIOM ioss_0_port_1_pin_3_HSIOM
#define U301_COM_SDA_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define U301_COM_SDA_HAL_PORT_PIN P1_3
#define U301_COM_SDA P1_3
#define U301_COM_SDA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_COM_SDA_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define U301_COM_SDA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define PTC3_ENABLED 1U
#define PTC3_PORT GPIO_PRT1
#define PTC3_PORT_NUM 1U
#define PTC3_PIN 4U
#define PTC3_NUM 4U
#define PTC3_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PTC3_INIT_DRIVESTATE 0
#ifndef ioss_0_port_1_pin_4_HSIOM
    #define ioss_0_port_1_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define PTC3_HSIOM ioss_0_port_1_pin_4_HSIOM
#define PTC3_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define PTC3_HAL_PORT_PIN P1_4
#define PTC3 P1_4
#define PTC3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define PTC3_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define PTC3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define PTC4_ENABLED 1U
#define PTC4_PORT GPIO_PRT1
#define PTC4_PORT_NUM 1U
#define PTC4_PIN 5U
#define PTC4_NUM 5U
#define PTC4_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PTC4_INIT_DRIVESTATE 0
#ifndef ioss_0_port_1_pin_5_HSIOM
    #define ioss_0_port_1_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define PTC4_HSIOM ioss_0_port_1_pin_5_HSIOM
#define PTC4_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define PTC4_HAL_PORT_PIN P1_5
#define PTC4 P1_5
#define PTC4_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define PTC4_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define PTC4_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define PTC5_ENABLED 1U
#define PTC5_PORT GPIO_PRT1
#define PTC5_PORT_NUM 1U
#define PTC5_PIN 6U
#define PTC5_NUM 6U
#define PTC5_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PTC5_INIT_DRIVESTATE 0
#ifndef ioss_0_port_1_pin_6_HSIOM
    #define ioss_0_port_1_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define PTC5_HSIOM ioss_0_port_1_pin_6_HSIOM
#define PTC5_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define PTC5_HAL_PORT_PIN P1_6
#define PTC5 P1_6
#define PTC5_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define PTC5_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define PTC5_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define TMP_PCB_SENSE_ENABLED 1U
#define TMP_PCB_SENSE_PORT GPIO_PRT2
#define TMP_PCB_SENSE_PORT_NUM 2U
#define TMP_PCB_SENSE_PIN 0U
#define TMP_PCB_SENSE_NUM 0U
#define TMP_PCB_SENSE_DRIVEMODE CY_GPIO_DM_ANALOG
#define TMP_PCB_SENSE_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_0_HSIOM
    #define ioss_0_port_2_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define TMP_PCB_SENSE_HSIOM ioss_0_port_2_pin_0_HSIOM
#define TMP_PCB_SENSE_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define TMP_PCB_SENSE_HAL_PORT_PIN P2_0
#define TMP_PCB_SENSE P2_0
#define TMP_PCB_SENSE_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define TMP_PCB_SENSE_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define TMP_PCB_SENSE_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define TM_BL_SENSE_ENABLED 1U
#define TM_BL_SENSE_PORT GPIO_PRT2
#define TM_BL_SENSE_PORT_NUM 2U
#define TM_BL_SENSE_PIN 1U
#define TM_BL_SENSE_NUM 1U
#define TM_BL_SENSE_DRIVEMODE CY_GPIO_DM_ANALOG
#define TM_BL_SENSE_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_1_HSIOM
    #define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define TM_BL_SENSE_HSIOM ioss_0_port_2_pin_1_HSIOM
#define TM_BL_SENSE_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define TM_BL_SENSE_HAL_PORT_PIN P2_1
#define TM_BL_SENSE P2_1
#define TM_BL_SENSE_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define TM_BL_SENSE_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define TM_BL_SENSE_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define VBATT_SENSE_ENABLED 1U
#define VBATT_SENSE_PORT GPIO_PRT2
#define VBATT_SENSE_PORT_NUM 2U
#define VBATT_SENSE_PIN 2U
#define VBATT_SENSE_NUM 2U
#define VBATT_SENSE_DRIVEMODE CY_GPIO_DM_ANALOG
#define VBATT_SENSE_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_2_HSIOM
    #define ioss_0_port_2_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define VBATT_SENSE_HSIOM ioss_0_port_2_pin_2_HSIOM
#define VBATT_SENSE_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define VBATT_SENSE_HAL_PORT_PIN P2_2
#define VBATT_SENSE P2_2
#define VBATT_SENSE_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define VBATT_SENSE_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define VBATT_SENSE_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define SYNC_CHECK_ENABLED 1U
#define SYNC_CHECK_PORT GPIO_PRT2
#define SYNC_CHECK_PORT_NUM 2U
#define SYNC_CHECK_PIN 3U
#define SYNC_CHECK_NUM 3U
#define SYNC_CHECK_DRIVEMODE CY_GPIO_DM_ANALOG
#define SYNC_CHECK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_3_HSIOM
    #define ioss_0_port_2_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define SYNC_CHECK_HSIOM ioss_0_port_2_pin_3_HSIOM
#define SYNC_CHECK_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define SYNC_CHECK_HAL_PORT_PIN P2_3
#define SYNC_CHECK P2_3
#define SYNC_CHECK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define SYNC_CHECK_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define SYNC_CHECK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define U301_FPC_DET_TX_OUT_ENABLED 1U
#define U301_FPC_DET_TX_OUT_PORT GPIO_PRT2
#define U301_FPC_DET_TX_OUT_PORT_NUM 2U
#define U301_FPC_DET_TX_OUT_PIN 4U
#define U301_FPC_DET_TX_OUT_NUM 4U
#define U301_FPC_DET_TX_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define U301_FPC_DET_TX_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_4_HSIOM
    #define ioss_0_port_2_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_FPC_DET_TX_OUT_HSIOM ioss_0_port_2_pin_4_HSIOM
#define U301_FPC_DET_TX_OUT_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define U301_FPC_DET_TX_OUT_HAL_PORT_PIN P2_4
#define U301_FPC_DET_TX_OUT P2_4
#define U301_FPC_DET_TX_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_FPC_DET_TX_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_FPC_DET_TX_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define U301_FPC_DET_RX_OUT_ENABLED 1U
#define U301_FPC_DET_RX_OUT_PORT GPIO_PRT2
#define U301_FPC_DET_RX_OUT_PORT_NUM 2U
#define U301_FPC_DET_RX_OUT_PIN 5U
#define U301_FPC_DET_RX_OUT_NUM 5U
#define U301_FPC_DET_RX_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define U301_FPC_DET_RX_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_5_HSIOM
    #define ioss_0_port_2_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_FPC_DET_RX_OUT_HSIOM ioss_0_port_2_pin_5_HSIOM
#define U301_FPC_DET_RX_OUT_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define U301_FPC_DET_RX_OUT_HAL_PORT_PIN P2_5
#define U301_FPC_DET_RX_OUT P2_5
#define U301_FPC_DET_RX_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_FPC_DET_RX_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_FPC_DET_RX_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define U301_LOCK_ENABLED 1U
#define U301_LOCK_PORT GPIO_PRT2
#define U301_LOCK_PORT_NUM 2U
#define U301_LOCK_PIN 6U
#define U301_LOCK_NUM 6U
#define U301_LOCK_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_LOCK_INIT_DRIVESTATE 0
#ifndef ioss_0_port_2_pin_6_HSIOM
    #define ioss_0_port_2_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_LOCK_HSIOM ioss_0_port_2_pin_6_HSIOM
#define U301_LOCK_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define U301_LOCK_HAL_PORT_PIN P2_6
#define U301_LOCK P2_6
#define U301_LOCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_LOCK_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_LOCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define U301_PASS_ENABLED 1U
#define U301_PASS_PORT GPIO_PRT2
#define U301_PASS_PORT_NUM 2U
#define U301_PASS_PIN 7U
#define U301_PASS_NUM 7U
#define U301_PASS_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_PASS_INIT_DRIVESTATE 0
#ifndef ioss_0_port_2_pin_7_HSIOM
    #define ioss_0_port_2_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_PASS_HSIOM ioss_0_port_2_pin_7_HSIOM
#define U301_PASS_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define U301_PASS_HAL_PORT_PIN P2_7
#define U301_PASS P2_7
#define U301_PASS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_PASS_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_PASS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define U301_DISP_FAULT_ENABLED 1U
#define U301_DISP_FAULT_PORT GPIO_PRT3
#define U301_DISP_FAULT_PORT_NUM 3U
#define U301_DISP_FAULT_PIN 1U
#define U301_DISP_FAULT_NUM 1U
#define U301_DISP_FAULT_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_DISP_FAULT_INIT_DRIVESTATE 0
#ifndef ioss_0_port_3_pin_1_HSIOM
    #define ioss_0_port_3_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_DISP_FAULT_HSIOM ioss_0_port_3_pin_1_HSIOM
#define U301_DISP_FAULT_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define U301_DISP_FAULT_HAL_PORT_PIN P3_1
#define U301_DISP_FAULT P3_1
#define U301_DISP_FAULT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_DISP_FAULT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_DISP_FAULT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define SWJ_SWDIO_TMS_ENABLED 1U
#define SWJ_SWDIO_TMS_PORT GPIO_PRT3
#define SWJ_SWDIO_TMS_PORT_NUM 3U
#define SWJ_SWDIO_TMS_PIN 2U
#define SWJ_SWDIO_TMS_NUM 2U
#define SWJ_SWDIO_TMS_DRIVEMODE CY_GPIO_DM_STRONG
#define SWJ_SWDIO_TMS_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_2_HSIOM
    #define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define SWJ_SWDIO_TMS_HSIOM ioss_0_port_3_pin_2_HSIOM
#define SWJ_SWDIO_TMS_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define SWJ_SWDIO_TMS_HAL_PORT_PIN P3_2
#define SWJ_SWDIO_TMS P3_2
#define SWJ_SWDIO_TMS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define SWJ_SWDIO_TMS_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define SWJ_SWDIO_TMS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define SWJ_SWCLK_TCLK_ENABLED 1U
#define SWJ_SWCLK_TCLK_PORT GPIO_PRT3
#define SWJ_SWCLK_TCLK_PORT_NUM 3U
#define SWJ_SWCLK_TCLK_PIN 3U
#define SWJ_SWCLK_TCLK_NUM 3U
#define SWJ_SWCLK_TCLK_DRIVEMODE CY_GPIO_DM_STRONG
#define SWJ_SWCLK_TCLK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_3_HSIOM
    #define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define SWJ_SWCLK_TCLK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define SWJ_SWCLK_TCLK_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define SWJ_SWCLK_TCLK_HAL_PORT_PIN P3_3
#define SWJ_SWCLK_TCLK P3_3
#define SWJ_SWCLK_TCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define SWJ_SWCLK_TCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define SWJ_SWCLK_TCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_TSC_ATTN_ENABLED 1U
#define U301_TSC_ATTN_PORT GPIO_PRT3
#define U301_TSC_ATTN_PORT_NUM 3U
#define U301_TSC_ATTN_PIN 4U
#define U301_TSC_ATTN_NUM 4U
#define U301_TSC_ATTN_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_TSC_ATTN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_3_pin_4_HSIOM
    #define ioss_0_port_3_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_TSC_ATTN_HSIOM ioss_0_port_3_pin_4_HSIOM
#define U301_TSC_ATTN_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define U301_TSC_ATTN_HAL_PORT_PIN P3_4
#define U301_TSC_ATTN P3_4
#define U301_TSC_ATTN_HAL_IRQ CYHAL_GPIO_IRQ_BOTH
#define U301_TSC_ATTN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_TSC_ATTN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define U301_TSC_RESET_ENABLED 1U
#define U301_TSC_RESET_PORT GPIO_PRT3
#define U301_TSC_RESET_PORT_NUM 3U
#define U301_TSC_RESET_PIN 5U
#define U301_TSC_RESET_NUM 5U
#define U301_TSC_RESET_DRIVEMODE CY_GPIO_DM_PULLUP_IN_OFF
#define U301_TSC_RESET_INIT_DRIVESTATE 0
#ifndef ioss_0_port_3_pin_5_HSIOM
    #define ioss_0_port_3_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_TSC_RESET_HSIOM ioss_0_port_3_pin_5_HSIOM
#define U301_TSC_RESET_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define U301_TSC_RESET_HAL_PORT_PIN P3_5
#define U301_TSC_RESET P3_5
#define U301_TSC_RESET_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_TSC_RESET_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_TSC_RESET_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif /* defined (CY_USING_HAL) */

#define EEPROM_SCL_ENABLED 1U
#define EEPROM_SCL_PORT GPIO_PRT4
#define EEPROM_SCL_PORT_NUM 4U
#define EEPROM_SCL_PIN 0U
#define EEPROM_SCL_NUM 0U
#define EEPROM_SCL_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define EEPROM_SCL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_0_HSIOM
    #define ioss_0_port_4_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define EEPROM_SCL_HSIOM ioss_0_port_4_pin_0_HSIOM
#define EEPROM_SCL_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define EEPROM_SCL_HAL_PORT_PIN P4_0
#define EEPROM_SCL P4_0
#define EEPROM_SCL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define EEPROM_SCL_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define EEPROM_SCL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define EEPROM_SDA_ENABLED 1U
#define EEPROM_SDA_PORT GPIO_PRT4
#define EEPROM_SDA_PORT_NUM 4U
#define EEPROM_SDA_PIN 1U
#define EEPROM_SDA_NUM 1U
#define EEPROM_SDA_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define EEPROM_SDA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_1_HSIOM
    #define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define EEPROM_SDA_HSIOM ioss_0_port_4_pin_1_HSIOM
#define EEPROM_SDA_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define EEPROM_SDA_HAL_PORT_PIN P4_1
#define EEPROM_SDA P4_1
#define EEPROM_SDA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define EEPROM_SDA_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define EEPROM_SDA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define EEPROM_WC_ENABLED 1U
#define EEPROM_WC_PORT GPIO_PRT4
#define EEPROM_WC_PORT_NUM 4U
#define EEPROM_WC_PIN 2U
#define EEPROM_WC_NUM 2U
#define EEPROM_WC_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define EEPROM_WC_INIT_DRIVESTATE 0
#ifndef ioss_0_port_4_pin_2_HSIOM
    #define ioss_0_port_4_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define EEPROM_WC_HSIOM ioss_0_port_4_pin_2_HSIOM
#define EEPROM_WC_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define EEPROM_WC_HAL_PORT_PIN P4_2
#define EEPROM_WC P4_2
#define EEPROM_WC_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define EEPROM_WC_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define EEPROM_WC_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_HV_LDO_EN_ENABLED 1U
#define U301_HV_LDO_EN_PORT GPIO_PRT4
#define U301_HV_LDO_EN_PORT_NUM 4U
#define U301_HV_LDO_EN_PIN 3U
#define U301_HV_LDO_EN_NUM 3U
#define U301_HV_LDO_EN_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define U301_HV_LDO_EN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_4_pin_3_HSIOM
    #define ioss_0_port_4_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_HV_LDO_EN_HSIOM ioss_0_port_4_pin_3_HSIOM
#define U301_HV_LDO_EN_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_HV_LDO_EN_HAL_PORT_PIN P4_3
#define U301_HV_LDO_EN P4_3
#define U301_HV_LDO_EN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_HV_LDO_EN_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_HV_LDO_EN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_P3V3_PGOOD_ENABLED 1U
#define U301_P3V3_PGOOD_PORT GPIO_PRT4
#define U301_P3V3_PGOOD_PORT_NUM 4U
#define U301_P3V3_PGOOD_PIN 4U
#define U301_P3V3_PGOOD_NUM 4U
#define U301_P3V3_PGOOD_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_P3V3_PGOOD_INIT_DRIVESTATE 0
#ifndef ioss_0_port_4_pin_4_HSIOM
    #define ioss_0_port_4_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_P3V3_PGOOD_HSIOM ioss_0_port_4_pin_4_HSIOM
#define U301_P3V3_PGOOD_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_P3V3_PGOOD_HAL_PORT_PIN P4_4
#define U301_P3V3_PGOOD P4_4
#define U301_P3V3_PGOOD_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_P3V3_PGOOD_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_P3V3_PGOOD_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define U301_P3V3_EN_ENABLED 1U
#define U301_P3V3_EN_PORT GPIO_PRT4
#define U301_P3V3_EN_PORT_NUM 4U
#define U301_P3V3_EN_PIN 5U
#define U301_P3V3_EN_NUM 5U
#define U301_P3V3_EN_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define U301_P3V3_EN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_4_pin_5_HSIOM
    #define ioss_0_port_4_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_P3V3_EN_HSIOM ioss_0_port_4_pin_5_HSIOM
#define U301_P3V3_EN_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_P3V3_EN_HAL_PORT_PIN P4_5
#define U301_P3V3_EN P4_5
#define U301_P3V3_EN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_P3V3_EN_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_P3V3_EN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define EN_VBATT_SENSE_ENABLED 1U
#define EN_VBATT_SENSE_PORT GPIO_PRT4
#define EN_VBATT_SENSE_PORT_NUM 4U
#define EN_VBATT_SENSE_PIN 6U
#define EN_VBATT_SENSE_NUM 6U
#define EN_VBATT_SENSE_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define EN_VBATT_SENSE_INIT_DRIVESTATE 0
#ifndef ioss_0_port_4_pin_6_HSIOM
    #define ioss_0_port_4_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define EN_VBATT_SENSE_HSIOM ioss_0_port_4_pin_6_HSIOM
#define EN_VBATT_SENSE_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define EN_VBATT_SENSE_HAL_PORT_PIN P4_6
#define EN_VBATT_SENSE P4_6
#define EN_VBATT_SENSE_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define EN_VBATT_SENSE_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define EN_VBATT_SENSE_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_LED_EN_ENABLED 1U
#define U301_LED_EN_PORT GPIO_PRT4
#define U301_LED_EN_PORT_NUM 4U
#define U301_LED_EN_PIN 7U
#define U301_LED_EN_NUM 7U
#define U301_LED_EN_DRIVEMODE CY_GPIO_DM_ANALOG
#define U301_LED_EN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_7_HSIOM
    #define ioss_0_port_4_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_LED_EN_HSIOM ioss_0_port_4_pin_7_HSIOM
#define U301_LED_EN_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_LED_EN_HAL_PORT_PIN P4_7
#define U301_LED_EN P4_7
#define U301_LED_EN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_LED_EN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_LED_EN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define U301_DISP_FAULT_S_ENABLED 1U
#define U301_DISP_FAULT_S_PORT GPIO_PRT5
#define U301_DISP_FAULT_S_PORT_NUM 5U
#define U301_DISP_FAULT_S_PIN 2U
#define U301_DISP_FAULT_S_NUM 2U
#define U301_DISP_FAULT_S_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_DISP_FAULT_S_INIT_DRIVESTATE 0
#ifndef ioss_0_port_5_pin_2_HSIOM
    #define ioss_0_port_5_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_DISP_FAULT_S_HSIOM ioss_0_port_5_pin_2_HSIOM
#define U301_DISP_FAULT_S_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_DISP_FAULT_S_HAL_PORT_PIN P5_2
#define U301_DISP_FAULT_S P5_2
#define U301_DISP_FAULT_S_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_DISP_FAULT_S_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_DISP_FAULT_S_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define U301_INTB_IN_ENABLED 1U
#define U301_INTB_IN_PORT GPIO_PRT5
#define U301_INTB_IN_PORT_NUM 5U
#define U301_INTB_IN_PIN 3U
#define U301_INTB_IN_NUM 3U
#define U301_INTB_IN_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define U301_INTB_IN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_5_pin_3_HSIOM
    #define ioss_0_port_5_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_INTB_IN_HSIOM ioss_0_port_5_pin_3_HSIOM
#define U301_INTB_IN_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_INTB_IN_HAL_PORT_PIN P5_3
#define U301_INTB_IN P5_3
#define U301_INTB_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_INTB_IN_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_INTB_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_PDB_ENABLED 1U
#define U301_PDB_PORT GPIO_PRT5
#define U301_PDB_PORT_NUM 5U
#define U301_PDB_PIN 5U
#define U301_PDB_NUM 5U
#define U301_PDB_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define U301_PDB_INIT_DRIVESTATE 0
#ifndef ioss_0_port_5_pin_5_HSIOM
    #define ioss_0_port_5_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_PDB_HSIOM ioss_0_port_5_pin_5_HSIOM
#define U301_PDB_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_PDB_HAL_PORT_PIN P5_5
#define U301_PDB P5_5
#define U301_PDB_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_PDB_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_PDB_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define DIM_ENABLED 1U
#define DIM_PORT GPIO_PRT5
#define DIM_PORT_NUM 5U
#define DIM_PIN 6U
#define DIM_NUM 6U
#define DIM_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define DIM_INIT_DRIVESTATE 0
#ifndef ioss_0_port_5_pin_6_HSIOM
    #define ioss_0_port_5_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define DIM_HSIOM ioss_0_port_5_pin_6_HSIOM
#define DIM_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define DIM_HAL_PORT_PIN P5_6
#define DIM P5_6
#define DIM_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define DIM_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define DIM_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_LED_INT_ENABLED 1U
#define U301_LED_INT_PORT GPIO_PRT5
#define U301_LED_INT_PORT_NUM 5U
#define U301_LED_INT_PIN 7U
#define U301_LED_INT_NUM 7U
#define U301_LED_INT_DRIVEMODE CY_GPIO_DM_HIGHZ
#define U301_LED_INT_INIT_DRIVESTATE 0
#ifndef ioss_0_port_5_pin_7_HSIOM
    #define ioss_0_port_5_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_LED_INT_HSIOM ioss_0_port_5_pin_7_HSIOM
#define U301_LED_INT_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_LED_INT_HAL_PORT_PIN P5_7
#define U301_LED_INT P5_7
#define U301_LED_INT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_LED_INT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define U301_LED_INT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define U301_BISTEN_ENABLED 1U
#define U301_BISTEN_PORT GPIO_PRT6
#define U301_BISTEN_PORT_NUM 6U
#define U301_BISTEN_PIN 0U
#define U301_BISTEN_NUM 0U
#define U301_BISTEN_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define U301_BISTEN_INIT_DRIVESTATE 0
#ifndef ioss_0_port_6_pin_0_HSIOM
    #define ioss_0_port_6_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_BISTEN_HSIOM ioss_0_port_6_pin_0_HSIOM
#define U301_BISTEN_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_BISTEN_HAL_PORT_PIN P6_0
#define U301_BISTEN P6_0
#define U301_BISTEN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_BISTEN_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_BISTEN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define U301_DISP_GLOBAL_RESET_ENABLED 1U
#define U301_DISP_GLOBAL_RESET_PORT GPIO_PRT6
#define U301_DISP_GLOBAL_RESET_PORT_NUM 6U
#define U301_DISP_GLOBAL_RESET_PIN 1U
#define U301_DISP_GLOBAL_RESET_NUM 1U
#define U301_DISP_GLOBAL_RESET_DRIVEMODE CY_GPIO_DM_PULLDOWN_IN_OFF
#define U301_DISP_GLOBAL_RESET_INIT_DRIVESTATE 0
#ifndef ioss_0_port_6_pin_1_HSIOM
    #define ioss_0_port_6_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define U301_DISP_GLOBAL_RESET_HSIOM ioss_0_port_6_pin_1_HSIOM
#define U301_DISP_GLOBAL_RESET_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define U301_DISP_GLOBAL_RESET_HAL_PORT_PIN P6_1
#define U301_DISP_GLOBAL_RESET P6_1
#define U301_DISP_GLOBAL_RESET_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define U301_DISP_GLOBAL_RESET_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define U301_DISP_GLOBAL_RESET_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#endif /* defined (CY_USING_HAL) */

#define DEBUG_UART_RX_ENABLED 1U
#define DEBUG_UART_RX_PORT GPIO_PRT7
#define DEBUG_UART_RX_PORT_NUM 7U
#define DEBUG_UART_RX_PIN 0U
#define DEBUG_UART_RX_NUM 0U
#define DEBUG_UART_RX_DRIVEMODE CY_GPIO_DM_HIGHZ
#define DEBUG_UART_RX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_0_HSIOM
    #define ioss_0_port_7_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define DEBUG_UART_RX_HSIOM ioss_0_port_7_pin_0_HSIOM
#define DEBUG_UART_RX_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define DEBUG_UART_RX_HAL_PORT_PIN P7_0
#define DEBUG_UART_RX P7_0
#define DEBUG_UART_RX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define DEBUG_UART_RX_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define DEBUG_UART_RX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define DEBUG_UART_TX_ENABLED 1U
#define DEBUG_UART_TX_PORT GPIO_PRT7
#define DEBUG_UART_TX_PORT_NUM 7U
#define DEBUG_UART_TX_PIN 1U
#define DEBUG_UART_TX_NUM 1U
#define DEBUG_UART_TX_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define DEBUG_UART_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_1_HSIOM
    #define ioss_0_port_7_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define DEBUG_UART_TX_HSIOM ioss_0_port_7_pin_1_HSIOM
#define DEBUG_UART_TX_IRQ ioss_interrupt_gpio_IRQn

#if defined (CY_USING_HAL)
#define DEBUG_UART_TX_HAL_PORT_PIN P7_1
#define DEBUG_UART_TX P7_1
#define DEBUG_UART_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define DEBUG_UART_TX_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define DEBUG_UART_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_MASTER_SCL_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_MASTER_SCL_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_MASTER_SDA_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_MASTER_SDA_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_P1V2_EN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_P1V2_EN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_P1V2_PGOOD_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_P1V2_PGOOD_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TEST_PIN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TEST_PIN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t PTC2_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PTC2_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_COM_SCL_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_COM_SCL_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_COM_SDA_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_COM_SDA_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t PTC3_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PTC3_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t PTC4_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PTC4_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t PTC5_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PTC5_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TMP_PCB_SENSE_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TMP_PCB_SENSE_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TM_BL_SENSE_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TM_BL_SENSE_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t VBATT_SENSE_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t VBATT_SENSE_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SYNC_CHECK_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SYNC_CHECK_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_FPC_DET_TX_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_FPC_DET_TX_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_FPC_DET_RX_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_FPC_DET_RX_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_LOCK_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_LOCK_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_PASS_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_PASS_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_DISP_FAULT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_DISP_FAULT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SWJ_SWDIO_TMS_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SWJ_SWDIO_TMS_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SWJ_SWCLK_TCLK_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SWJ_SWCLK_TCLK_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_TSC_ATTN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_TSC_ATTN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_TSC_RESET_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_TSC_RESET_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t EEPROM_SCL_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t EEPROM_SCL_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t EEPROM_SDA_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t EEPROM_SDA_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t EEPROM_WC_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t EEPROM_WC_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_HV_LDO_EN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_HV_LDO_EN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_P3V3_PGOOD_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_P3V3_PGOOD_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_P3V3_EN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_P3V3_EN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t EN_VBATT_SENSE_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t EN_VBATT_SENSE_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_LED_EN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_LED_EN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_DISP_FAULT_S_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_DISP_FAULT_S_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_INTB_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_INTB_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_PDB_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_PDB_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t DIM_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t DIM_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_LED_INT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_LED_INT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_BISTEN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_BISTEN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t U301_DISP_GLOBAL_RESET_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t U301_DISP_GLOBAL_RESET_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t DEBUG_UART_RX_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t DEBUG_UART_RX_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t DEBUG_UART_TX_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t DEBUG_UART_TX_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PINS_H */
