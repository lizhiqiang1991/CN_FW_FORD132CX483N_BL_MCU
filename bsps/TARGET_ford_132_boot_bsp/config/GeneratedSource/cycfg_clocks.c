/*******************************************************************************
 * File Name: cycfg_clocks.c
 *
 * Description:
 * Clock configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.30.0
 * device-db 4.18.0.7028
 * mtb-pdl-cat2 2.12.0.12916
 *
 *******************************************************************************
 * Copyright 2024 Cypress Semiconductor Corporation (an Infineon company) or
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

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t TIMER_BASE_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = TIMER_BASE_DIV_HW,
    .channel_num = TIMER_BASE_DIV_NUM,
};
const cyhal_resource_inst_t DEBUG_UART_CLK_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = DEBUG_UART_CLK_DIV_HW,
    .channel_num = DEBUG_UART_CLK_DIV_NUM,
};
const cyhal_resource_inst_t I2C_MASTER_CLK_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = I2C_MASTER_CLK_DIV_HW,
    .channel_num = I2C_MASTER_CLK_DIV_NUM,
};
const cyhal_resource_inst_t I2C_COM_CLK_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = I2C_COM_CLK_DIV_HW,
    .channel_num = I2C_COM_CLK_DIV_NUM,
};
const cyhal_resource_inst_t PWM_OUT_DIM_CLK_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = PWM_OUT_DIM_CLK_DIV_HW,
    .channel_num = PWM_OUT_DIM_CLK_DIV_NUM,
};
const cyhal_resource_inst_t ADC_CAP_CLK_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = ADC_CAP_CLK_DIV_HW,
    .channel_num = ADC_CAP_CLK_DIV_NUM,
};
const cyhal_resource_inst_t I2C_EEPROM_CLK_DIV_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = I2C_EEPROM_CLK_DIV_HW,
    .channel_num = I2C_EEPROM_CLK_DIV_NUM,
};
const cyhal_resource_inst_t peri_0_div_16_7_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = peri_0_div_16_7_HW,
    .channel_num = peri_0_div_16_7_NUM,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_clocks(void)
{
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 0U, 47U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 1U, 34U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 2U, 4U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 3U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 3U, 4U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 3U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 4U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 4U, 95U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 4U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 5U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 5U, 23U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 5U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 6U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 6U, 4U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 6U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 7U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 7U, 2U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 7U);
}
void reserve_cycfg_clocks(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&TIMER_BASE_DIV_obj);
    cyhal_hwmgr_reserve(&DEBUG_UART_CLK_DIV_obj);
    cyhal_hwmgr_reserve(&I2C_MASTER_CLK_DIV_obj);
    cyhal_hwmgr_reserve(&I2C_COM_CLK_DIV_obj);
    cyhal_hwmgr_reserve(&PWM_OUT_DIM_CLK_DIV_obj);
    cyhal_hwmgr_reserve(&ADC_CAP_CLK_DIV_obj);
    cyhal_hwmgr_reserve(&I2C_EEPROM_CLK_DIV_obj);
    cyhal_hwmgr_reserve(&peri_0_div_16_7_obj);
#endif /* defined (CY_USING_HAL) */
}
