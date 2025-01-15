/*******************************************************************************
 * File Name: cycfg_peripherals.h
 *
 * Description:
 * Peripheral Hardware Block configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sar.h"
#include "cycfg_routing.h"
#include "cy_sysclk.h"
#include "cy_scb_i2c.h"
#include "cy_scb_uart.h"
#include "cy_tcpwm_counter.h"
#include "cy_tcpwm_pwm.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ADC_CAP_ENABLED 1U
#define ADC_CAP_HW SAR0
#define ADC_CAP_IRQ pass_0_interrupt_sar_IRQn
#define ADC_CAP_VREF_MV 3300UL
#define I2C_EEPROM_ENABLED 1U
#define I2C_EEPROM_HW SCB0
#define I2C_EEPROM_IRQ scb_0_interrupt_IRQn
#define I2C_MASTER_ENABLED 1U
#define I2C_MASTER_HW SCB1
#define I2C_MASTER_IRQ scb_1_interrupt_IRQn
#define I2C_COM_ENABLED 1U
#define I2C_COM_HW SCB2
#define I2C_COM_IRQ scb_2_interrupt_IRQn
#define DEBUG_UART_ENABLED 1U
#define DEBUG_UART_HW SCB3
#define DEBUG_UART_IRQ scb_3_interrupt_IRQn
#define TIMER_BASE_ENABLED 1U
#define TIMER_BASE_HW TCPWM
#define TIMER_BASE_NUM 0UL
#define TIMER_BASE_MASK (1UL << 0)
#define PWM_OUT_DIM_ENABLED 1U
#define PWM_OUT_DIM_HW TCPWM
#define PWM_OUT_DIM_NUM 7UL
#define PWM_OUT_DIM_MASK (1UL << 7)

extern const cy_stc_sar_channel_config_t ADC_CAP_channel_0_config;
extern const cy_stc_sar_channel_config_t ADC_CAP_channel_1_config;
extern const cy_stc_sar_channel_config_t ADC_CAP_channel_2_config;
extern const cy_stc_sar_channel_config_t ADC_CAP_channel_3_config;
extern const cy_stc_sar_channel_config_t ADC_CAP_channel_4_config;
extern const cy_stc_sar_channel_config_t ADC_CAP_channel_5_config;
extern const cy_stc_sar_config_t ADC_CAP_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t ADC_CAP_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_scb_i2c_config_t I2C_EEPROM_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t I2C_EEPROM_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_scb_i2c_config_t I2C_MASTER_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t I2C_MASTER_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_scb_i2c_config_t I2C_COM_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t I2C_COM_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_scb_uart_config_t DEBUG_UART_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t DEBUG_UART_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_tcpwm_counter_config_t TIMER_BASE_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TIMER_BASE_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_tcpwm_pwm_config_t PWM_OUT_DIM_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PWM_OUT_DIM_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
