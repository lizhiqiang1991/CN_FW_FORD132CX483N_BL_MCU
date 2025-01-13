/*******************************************************************************
 * File Name: cycfg_peripherals.c
 *
 * Description:
 * Peripheral Hardware Block configuration
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

#include "cycfg_peripherals.h"

#define TIMER_BASE_INPUT_DISABLED 0x7U
#define PWM_OUT_DIM_INPUT_DISABLED 0x7U

const cy_stc_sar_channel_config_t ADC_CAP_channel_0_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS0_PIN | (SAR0_VPLUS0_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = false,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_0,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_channel_config_t ADC_CAP_channel_1_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS1_PIN | (SAR0_VPLUS1_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = false,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_1,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_channel_config_t ADC_CAP_channel_2_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS2_PIN | (SAR0_VPLUS2_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = false,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_1,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_channel_config_t ADC_CAP_channel_3_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS3_PIN | (SAR0_VPLUS3_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = false,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_1,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_channel_config_t ADC_CAP_channel_4_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS4_PIN | (SAR0_VPLUS4_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = false,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_1,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_channel_config_t ADC_CAP_channel_5_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS5_PIN | (SAR0_VPLUS5_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = false,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_1,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_config_t ADC_CAP_config =
{
    .vrefSel = CY_SAR_VREF_SEL_VDDA,
    .vrefBypCapEn = false,
    .negSel = CY_SAR_NEG_SEL_VSSA_KELVIN,
    .negVref = CY_SAR_NEGVREF_HW,
    .boostPump = false,
    .power = CY_SAR_QUARTER_PWR,
    .sarMuxDsEn = false,
    .switchDisable = false,
    .subResolution = CY_SAR_SUB_RESOLUTION_10B,
    .leftAlign = false,
    .singleEndedSigned = true,
    .differentialSigned = true,
    .avgCnt = CY_SAR_AVG_CNT_2,
    .avgShift = true,
    .trigMode = CY_SAR_TRIGGER_MODE_FW_ONLY,
    .eosEn = false,
    .sampleTime0 = 1023,
    .sampleTime1 = 21,
    .sampleTime2 = 2,
    .sampleTime3 = 2,
    .rangeThresLow = 0UL,
    .rangeThresHigh = 0UL,
    .rangeCond = CY_SAR_RANGE_COND_BELOW,
    .chanEn = 63UL,
    .channelConfig = {&ADC_CAP_channel_0_config, &ADC_CAP_channel_1_config, &ADC_CAP_channel_2_config, &ADC_CAP_channel_3_config, &ADC_CAP_channel_4_config, &ADC_CAP_channel_5_config, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    .routingConfig = NULL,
    .vrefMvValue = ADC_CAP_VREF_MV,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t ADC_CAP_obj =
{
    .type = CYHAL_RSC_ADC,
    .block_num = 0,
    .channel_num = 0,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_scb_i2c_config_t I2C_EEPROM_config =
{
    .i2cMode = CY_SCB_I2C_SLAVE,
    .useRxFifo = true,
    .useTxFifo = true,
    .slaveAddress = 16,
    .slaveAddressMask = 254,
    .acceptAddrInFifo = false,
    .ackGeneralAddr = false,
    .enableWakeFromSleep = false,
    .enableDigitalFilter = false,
    .lowPhaseDutyCycle = 0,
    .highPhaseDutyCycle = 0,
    .delayInFifoAddress = 0,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t I2C_EEPROM_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_scb_i2c_config_t I2C_MASTER_config =
{
    .i2cMode = CY_SCB_I2C_MASTER,
    .useRxFifo = true,
    .useTxFifo = true,
    .slaveAddress = 0U,
    .slaveAddressMask = 0U,
    .acceptAddrInFifo = false,
    .ackGeneralAddr = false,
    .enableWakeFromSleep = false,
    .enableDigitalFilter = true,
    .lowPhaseDutyCycle = 12,
    .highPhaseDutyCycle = 12,
    .delayInFifoAddress = 0,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t I2C_MASTER_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 1U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_scb_i2c_config_t I2C_COM_config =
{
    .i2cMode = CY_SCB_I2C_MASTER_SLAVE,
    .useRxFifo = true,
    .useTxFifo = true,
    .slaveAddress = 0x71,
    .slaveAddressMask = 0xFE,
    .acceptAddrInFifo = false,
    .ackGeneralAddr = false,
    .enableWakeFromSleep = false,
    .enableDigitalFilter = true,
    .lowPhaseDutyCycle = 12,
    .highPhaseDutyCycle = 12,
    .delayInFifoAddress = 0,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t I2C_COM_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 2U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_scb_uart_config_t DEBUG_UART_config =
{
    .uartMode = CY_SCB_UART_STANDARD,
    .enableMutliProcessorMode = false,
    .smartCardRetryOnNack = false,
    .irdaInvertRx = false,
    .irdaEnableLowPowerReceiver = false,
    .enableLinMode = false,
    .oversample = 12,
    .enableMsbFirst = false,
    .dataWidth = 8UL,
    .parity = CY_SCB_UART_PARITY_NONE,
    .stopBits = CY_SCB_UART_STOP_BITS_1,
    .enableInputFilter = false,
    .breakWidth = 11UL,
    .dropOnFrameError = false,
    .dropOnParityError = false,
    .receiverAddress = 0x0UL,
    .receiverAddressMask = 0x0UL,
    .acceptAddrInFifo = false,
    .enableCts = false,
    .ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rtsRxFifoLevel = 0UL,
    .rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rxFifoTriggerLevel = 7UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 0UL,
    .txFifoIntEnableMask = 0UL,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t DEBUG_UART_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 3U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_tcpwm_counter_config_t TIMER_BASE_config =
{
    .period = 32768,
    .clockPrescaler = CY_TCPWM_COUNTER_PRESCALER_DIVBY_1,
    .runMode = CY_TCPWM_COUNTER_CONTINUOUS,
    .countDirection = CY_TCPWM_COUNTER_COUNT_UP,
    .compareOrCapture = CY_TCPWM_COUNTER_MODE_CAPTURE,
    .compare0 = 16384,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = CY_TCPWM_INT_NONE,
    .captureInputMode = TIMER_BASE_INPUT_DISABLED & 0x3U,
    .captureInput = CY_TCPWM_INPUT_0,
    .reloadInputMode = TIMER_BASE_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = TIMER_BASE_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .stopInputMode = TIMER_BASE_INPUT_DISABLED & 0x3U,
    .stopInput = CY_TCPWM_INPUT_0,
    .countInputMode = TIMER_BASE_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t TIMER_BASE_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_tcpwm_pwm_config_t PWM_OUT_DIM_config =
{
    .pwmMode = CY_TCPWM_PWM_MODE_PWM,
    .clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
    .pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
    .deadTimeClocks = 0,
    .runMode = CY_TCPWM_PWM_CONTINUOUS,
    .period0 = 32768,
    .period1 = 32768,
    .enablePeriodSwap = false,
    .compare0 = 16384,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = CY_TCPWM_INT_NONE,
    .invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
    .invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
    .killMode = CY_TCPWM_PWM_STOP_ON_KILL,
    .swapInputMode = PWM_OUT_DIM_INPUT_DISABLED & 0x3U,
    .swapInput = CY_TCPWM_INPUT_0,
    .reloadInputMode = PWM_OUT_DIM_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = PWM_OUT_DIM_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .killInputMode = PWM_OUT_DIM_INPUT_DISABLED & 0x3U,
    .killInput = CY_TCPWM_INPUT_0,
    .countInputMode = PWM_OUT_DIM_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PWM_OUT_DIM_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 7U,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void)
{
    SAR_MUX_SWITCH0(SAR0) = CY_SAR_MUX_FW_VSSA_VMINUS;
    SAR_MUX_SWITCH_HW_CTRL(SAR0) |= CY_SAR_MUX_HW_CTRL_VSSA;
    Cy_SysClk_PeriphAssignDivider(PCLK_PASS0_CLOCK_SAR, CY_SYSCLK_DIV_16_BIT, 5U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB0_CLOCK, CY_SYSCLK_DIV_16_BIT, 6U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB1_CLOCK, CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB2_CLOCK, CY_SYSCLK_DIV_16_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB3_CLOCK, CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS0, CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS7, CY_SYSCLK_DIV_16_BIT, 4U);
}
void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&ADC_CAP_obj);
    cyhal_hwmgr_reserve(&I2C_EEPROM_obj);
    cyhal_hwmgr_reserve(&I2C_MASTER_obj);
    cyhal_hwmgr_reserve(&I2C_COM_obj);
    cyhal_hwmgr_reserve(&DEBUG_UART_obj);
    cyhal_hwmgr_reserve(&TIMER_BASE_obj);
    cyhal_hwmgr_reserve(&PWM_OUT_DIM_obj);
#endif /* defined (CY_USING_HAL) */
}
