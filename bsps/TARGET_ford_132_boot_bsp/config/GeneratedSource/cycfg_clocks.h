/*******************************************************************************
 * File Name: cycfg_clocks.h
 *
 * Description:
 * Clock configuration
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

#if !defined(CYCFG_CLOCKS_H)
#define CYCFG_CLOCKS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define TIMER_BASE_DIV_ENABLED 1U
#define TIMER_BASE_DIV_HW CY_SYSCLK_DIV_16_BIT
#define TIMER_BASE_DIV_NUM 0U
#define DEBUG_UART_CLK_DIV_ENABLED 1U
#define DEBUG_UART_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define DEBUG_UART_CLK_DIV_NUM 1U
#define I2C_MASTER_CLK_DIV_ENABLED 1U
#define I2C_MASTER_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define I2C_MASTER_CLK_DIV_NUM 2U
#define I2C_COM_CLK_DIV_ENABLED 1U
#define I2C_COM_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define I2C_COM_CLK_DIV_NUM 3U
#define PWM_OUT_DIM_CLK_DIV_ENABLED 1U
#define PWM_OUT_DIM_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define PWM_OUT_DIM_CLK_DIV_NUM 4U
#define ADC_CAP_CLK_DIV_ENABLED 1U
#define ADC_CAP_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define ADC_CAP_CLK_DIV_NUM 5U
#define I2C_EEPROM_CLK_DIV_ENABLED 1U
#define I2C_EEPROM_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define I2C_EEPROM_CLK_DIV_NUM 6U
#define peri_0_div_16_7_ENABLED 1U
#define peri_0_div_16_7_HW CY_SYSCLK_DIV_16_BIT
#define peri_0_div_16_7_NUM 7U

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TIMER_BASE_DIV_obj;
extern const cyhal_resource_inst_t DEBUG_UART_CLK_DIV_obj;
extern const cyhal_resource_inst_t I2C_MASTER_CLK_DIV_obj;
extern const cyhal_resource_inst_t I2C_COM_CLK_DIV_obj;
extern const cyhal_resource_inst_t PWM_OUT_DIM_CLK_DIV_obj;
extern const cyhal_resource_inst_t ADC_CAP_CLK_DIV_obj;
extern const cyhal_resource_inst_t I2C_EEPROM_CLK_DIV_obj;
extern const cyhal_resource_inst_t peri_0_div_16_7_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_clocks(void);
void reserve_cycfg_clocks(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_CLOCKS_H */
