/*******************************************************************************
 * File Name: cycfg_pins.c
 *
 * Description:
 * Pin configuration
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t U301_MASTER_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = U301_MASTER_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_MASTER_SCL_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_MASTER_SCL_PORT_NUM,
    .channel_num = U301_MASTER_SCL_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_MASTER_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = U301_MASTER_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_MASTER_SDA_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_MASTER_SDA_PORT_NUM,
    .channel_num = U301_MASTER_SDA_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_P1V2_EN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = U301_P1V2_EN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_P1V2_EN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_P1V2_EN_PORT_NUM,
    .channel_num = U301_P1V2_EN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_P1V2_PGOOD_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_P1V2_PGOOD_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_P1V2_PGOOD_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_P1V2_PGOOD_PORT_NUM,
    .channel_num = U301_P1V2_PGOOD_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t TEST_PIN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = TEST_PIN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t TEST_PIN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = TEST_PIN_PORT_NUM,
    .channel_num = TEST_PIN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t PTC2_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PTC2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PTC2_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = PTC2_PORT_NUM,
    .channel_num = PTC2_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_COM_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = U301_COM_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_COM_SCL_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_COM_SCL_PORT_NUM,
    .channel_num = U301_COM_SCL_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_COM_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = U301_COM_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_COM_SDA_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_COM_SDA_PORT_NUM,
    .channel_num = U301_COM_SDA_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t PTC3_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PTC3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PTC3_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = PTC3_PORT_NUM,
    .channel_num = PTC3_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t PTC4_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PTC4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PTC4_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = PTC4_PORT_NUM,
    .channel_num = PTC4_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t PTC5_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PTC5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PTC5_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = PTC5_PORT_NUM,
    .channel_num = PTC5_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t TMP_PCB_SENSE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = TMP_PCB_SENSE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t TMP_PCB_SENSE_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = TMP_PCB_SENSE_PORT_NUM,
    .channel_num = TMP_PCB_SENSE_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t TM_BL_SENSE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = TM_BL_SENSE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t TM_BL_SENSE_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = TM_BL_SENSE_PORT_NUM,
    .channel_num = TM_BL_SENSE_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t VBATT_SENSE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = VBATT_SENSE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t VBATT_SENSE_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = VBATT_SENSE_PORT_NUM,
    .channel_num = VBATT_SENSE_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t SYNC_CHECK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = SYNC_CHECK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SYNC_CHECK_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = SYNC_CHECK_PORT_NUM,
    .channel_num = SYNC_CHECK_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_FPC_DET_TX_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = U301_FPC_DET_TX_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_FPC_DET_TX_OUT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_FPC_DET_TX_OUT_PORT_NUM,
    .channel_num = U301_FPC_DET_TX_OUT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_FPC_DET_RX_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = U301_FPC_DET_RX_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_FPC_DET_RX_OUT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_FPC_DET_RX_OUT_PORT_NUM,
    .channel_num = U301_FPC_DET_RX_OUT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_LOCK_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_LOCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_LOCK_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_LOCK_PORT_NUM,
    .channel_num = U301_LOCK_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_PASS_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_PASS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_PASS_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_PASS_PORT_NUM,
    .channel_num = U301_PASS_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_DISP_FAULT_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_DISP_FAULT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_DISP_FAULT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_DISP_FAULT_PORT_NUM,
    .channel_num = U301_DISP_FAULT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t SWJ_SWDIO_TMS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SWJ_SWDIO_TMS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SWJ_SWDIO_TMS_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = SWJ_SWDIO_TMS_PORT_NUM,
    .channel_num = SWJ_SWDIO_TMS_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t SWJ_SWCLK_TCLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SWJ_SWCLK_TCLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SWJ_SWCLK_TCLK_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = SWJ_SWCLK_TCLK_PORT_NUM,
    .channel_num = SWJ_SWCLK_TCLK_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_TSC_ATTN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_TSC_ATTN_HSIOM,
    .intEdge = CY_GPIO_INTR_BOTH,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_TSC_ATTN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_TSC_ATTN_PORT_NUM,
    .channel_num = U301_TSC_ATTN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_TSC_RESET_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_PULLUP_IN_OFF,
    .hsiom = U301_TSC_RESET_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_TSC_RESET_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_TSC_RESET_PORT_NUM,
    .channel_num = U301_TSC_RESET_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t EEPROM_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = EEPROM_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t EEPROM_SCL_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = EEPROM_SCL_PORT_NUM,
    .channel_num = EEPROM_SCL_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t EEPROM_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = EEPROM_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t EEPROM_SDA_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = EEPROM_SDA_PORT_NUM,
    .channel_num = EEPROM_SDA_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t EEPROM_WC_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = EEPROM_WC_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t EEPROM_WC_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = EEPROM_WC_PORT_NUM,
    .channel_num = EEPROM_WC_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_HV_LDO_EN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = U301_HV_LDO_EN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_HV_LDO_EN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_HV_LDO_EN_PORT_NUM,
    .channel_num = U301_HV_LDO_EN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_P3V3_PGOOD_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_P3V3_PGOOD_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_P3V3_PGOOD_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_P3V3_PGOOD_PORT_NUM,
    .channel_num = U301_P3V3_PGOOD_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_P3V3_EN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = U301_P3V3_EN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_P3V3_EN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_P3V3_EN_PORT_NUM,
    .channel_num = U301_P3V3_EN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t EN_VBATT_SENSE_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = EN_VBATT_SENSE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t EN_VBATT_SENSE_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = EN_VBATT_SENSE_PORT_NUM,
    .channel_num = EN_VBATT_SENSE_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_LED_EN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = U301_LED_EN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_LED_EN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_LED_EN_PORT_NUM,
    .channel_num = U301_LED_EN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_DISP_FAULT_S_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_DISP_FAULT_S_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_DISP_FAULT_S_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_DISP_FAULT_S_PORT_NUM,
    .channel_num = U301_DISP_FAULT_S_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_INTB_IN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = U301_INTB_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_INTB_IN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_INTB_IN_PORT_NUM,
    .channel_num = U301_INTB_IN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_PDB_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = U301_PDB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_PDB_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_PDB_PORT_NUM,
    .channel_num = U301_PDB_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t DIM_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = DIM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t DIM_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = DIM_PORT_NUM,
    .channel_num = DIM_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_LED_INT_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = U301_LED_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_LED_INT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_LED_INT_PORT_NUM,
    .channel_num = U301_LED_INT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_BISTEN_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = U301_BISTEN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_BISTEN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_BISTEN_PORT_NUM,
    .channel_num = U301_BISTEN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t U301_DISP_GLOBAL_RESET_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_PULLDOWN_IN_OFF,
    .hsiom = U301_DISP_GLOBAL_RESET_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t U301_DISP_GLOBAL_RESET_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = U301_DISP_GLOBAL_RESET_PORT_NUM,
    .channel_num = U301_DISP_GLOBAL_RESET_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t DEBUG_UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = DEBUG_UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t DEBUG_UART_RX_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = DEBUG_UART_RX_PORT_NUM,
    .channel_num = DEBUG_UART_RX_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t DEBUG_UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = DEBUG_UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t DEBUG_UART_TX_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = DEBUG_UART_TX_PORT_NUM,
    .channel_num = DEBUG_UART_TX_PIN,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(U301_MASTER_SCL_PORT, U301_MASTER_SCL_PIN, &U301_MASTER_SCL_config);
    Cy_GPIO_Pin_Init(U301_MASTER_SDA_PORT, U301_MASTER_SDA_PIN, &U301_MASTER_SDA_config);
    Cy_GPIO_Pin_Init(U301_P1V2_EN_PORT, U301_P1V2_EN_PIN, &U301_P1V2_EN_config);
    Cy_GPIO_Pin_Init(U301_P1V2_PGOOD_PORT, U301_P1V2_PGOOD_PIN, &U301_P1V2_PGOOD_config);
    Cy_GPIO_Pin_Init(TEST_PIN_PORT, TEST_PIN_PIN, &TEST_PIN_config);
    Cy_GPIO_Pin_Init(PTC2_PORT, PTC2_PIN, &PTC2_config);
    Cy_GPIO_Pin_Init(U301_COM_SCL_PORT, U301_COM_SCL_PIN, &U301_COM_SCL_config);
    Cy_GPIO_Pin_Init(U301_COM_SDA_PORT, U301_COM_SDA_PIN, &U301_COM_SDA_config);
    Cy_GPIO_Pin_Init(PTC3_PORT, PTC3_PIN, &PTC3_config);
    Cy_GPIO_Pin_Init(PTC4_PORT, PTC4_PIN, &PTC4_config);
    Cy_GPIO_Pin_Init(PTC5_PORT, PTC5_PIN, &PTC5_config);
    Cy_GPIO_Pin_Init(TMP_PCB_SENSE_PORT, TMP_PCB_SENSE_PIN, &TMP_PCB_SENSE_config);
    Cy_GPIO_Pin_Init(TM_BL_SENSE_PORT, TM_BL_SENSE_PIN, &TM_BL_SENSE_config);
    Cy_GPIO_Pin_Init(VBATT_SENSE_PORT, VBATT_SENSE_PIN, &VBATT_SENSE_config);
    Cy_GPIO_Pin_Init(SYNC_CHECK_PORT, SYNC_CHECK_PIN, &SYNC_CHECK_config);
    Cy_GPIO_Pin_Init(U301_FPC_DET_TX_OUT_PORT, U301_FPC_DET_TX_OUT_PIN, &U301_FPC_DET_TX_OUT_config);
    Cy_GPIO_Pin_Init(U301_FPC_DET_RX_OUT_PORT, U301_FPC_DET_RX_OUT_PIN, &U301_FPC_DET_RX_OUT_config);
    Cy_GPIO_Pin_Init(U301_LOCK_PORT, U301_LOCK_PIN, &U301_LOCK_config);
    Cy_GPIO_Pin_Init(U301_PASS_PORT, U301_PASS_PIN, &U301_PASS_config);
    Cy_GPIO_Pin_Init(U301_DISP_FAULT_PORT, U301_DISP_FAULT_PIN, &U301_DISP_FAULT_config);
    Cy_GPIO_Pin_Init(SWJ_SWDIO_TMS_PORT, SWJ_SWDIO_TMS_PIN, &SWJ_SWDIO_TMS_config);
    Cy_GPIO_Pin_Init(SWJ_SWCLK_TCLK_PORT, SWJ_SWCLK_TCLK_PIN, &SWJ_SWCLK_TCLK_config);
    Cy_GPIO_Pin_Init(U301_TSC_ATTN_PORT, U301_TSC_ATTN_PIN, &U301_TSC_ATTN_config);
    Cy_GPIO_Pin_Init(U301_TSC_RESET_PORT, U301_TSC_RESET_PIN, &U301_TSC_RESET_config);
    Cy_GPIO_Pin_Init(EEPROM_SCL_PORT, EEPROM_SCL_PIN, &EEPROM_SCL_config);
    Cy_GPIO_Pin_Init(EEPROM_SDA_PORT, EEPROM_SDA_PIN, &EEPROM_SDA_config);
    Cy_GPIO_Pin_Init(EEPROM_WC_PORT, EEPROM_WC_PIN, &EEPROM_WC_config);
    Cy_GPIO_Pin_Init(U301_HV_LDO_EN_PORT, U301_HV_LDO_EN_PIN, &U301_HV_LDO_EN_config);
    Cy_GPIO_Pin_Init(U301_P3V3_PGOOD_PORT, U301_P3V3_PGOOD_PIN, &U301_P3V3_PGOOD_config);
    Cy_GPIO_Pin_Init(U301_P3V3_EN_PORT, U301_P3V3_EN_PIN, &U301_P3V3_EN_config);
    Cy_GPIO_Pin_Init(EN_VBATT_SENSE_PORT, EN_VBATT_SENSE_PIN, &EN_VBATT_SENSE_config);
    Cy_GPIO_Pin_Init(U301_LED_EN_PORT, U301_LED_EN_PIN, &U301_LED_EN_config);
    Cy_GPIO_Pin_Init(U301_DISP_FAULT_S_PORT, U301_DISP_FAULT_S_PIN, &U301_DISP_FAULT_S_config);
    Cy_GPIO_Pin_Init(U301_INTB_IN_PORT, U301_INTB_IN_PIN, &U301_INTB_IN_config);
    Cy_GPIO_Pin_Init(U301_PDB_PORT, U301_PDB_PIN, &U301_PDB_config);
    Cy_GPIO_Pin_Init(DIM_PORT, DIM_PIN, &DIM_config);
    Cy_GPIO_Pin_Init(U301_LED_INT_PORT, U301_LED_INT_PIN, &U301_LED_INT_config);
    Cy_GPIO_Pin_Init(U301_BISTEN_PORT, U301_BISTEN_PIN, &U301_BISTEN_config);
    Cy_GPIO_Pin_Init(U301_DISP_GLOBAL_RESET_PORT, U301_DISP_GLOBAL_RESET_PIN, &U301_DISP_GLOBAL_RESET_config);
    Cy_GPIO_Pin_Init(DEBUG_UART_RX_PORT, DEBUG_UART_RX_PIN, &DEBUG_UART_RX_config);
    Cy_GPIO_Pin_Init(DEBUG_UART_TX_PORT, DEBUG_UART_TX_PIN, &DEBUG_UART_TX_config);
}
void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&U301_MASTER_SCL_obj);
    cyhal_hwmgr_reserve(&U301_MASTER_SDA_obj);
    cyhal_hwmgr_reserve(&U301_P1V2_EN_obj);
    cyhal_hwmgr_reserve(&U301_P1V2_PGOOD_obj);
    cyhal_hwmgr_reserve(&TEST_PIN_obj);
    cyhal_hwmgr_reserve(&PTC2_obj);
    cyhal_hwmgr_reserve(&U301_COM_SCL_obj);
    cyhal_hwmgr_reserve(&U301_COM_SDA_obj);
    cyhal_hwmgr_reserve(&PTC3_obj);
    cyhal_hwmgr_reserve(&PTC4_obj);
    cyhal_hwmgr_reserve(&PTC5_obj);
    cyhal_hwmgr_reserve(&TMP_PCB_SENSE_obj);
    cyhal_hwmgr_reserve(&TM_BL_SENSE_obj);
    cyhal_hwmgr_reserve(&VBATT_SENSE_obj);
    cyhal_hwmgr_reserve(&SYNC_CHECK_obj);
    cyhal_hwmgr_reserve(&U301_FPC_DET_TX_OUT_obj);
    cyhal_hwmgr_reserve(&U301_FPC_DET_RX_OUT_obj);
    cyhal_hwmgr_reserve(&U301_LOCK_obj);
    cyhal_hwmgr_reserve(&U301_PASS_obj);
    cyhal_hwmgr_reserve(&U301_DISP_FAULT_obj);
    cyhal_hwmgr_reserve(&SWJ_SWDIO_TMS_obj);
    cyhal_hwmgr_reserve(&SWJ_SWCLK_TCLK_obj);
    cyhal_hwmgr_reserve(&U301_TSC_ATTN_obj);
    cyhal_hwmgr_reserve(&U301_TSC_RESET_obj);
    cyhal_hwmgr_reserve(&EEPROM_SCL_obj);
    cyhal_hwmgr_reserve(&EEPROM_SDA_obj);
    cyhal_hwmgr_reserve(&EEPROM_WC_obj);
    cyhal_hwmgr_reserve(&U301_HV_LDO_EN_obj);
    cyhal_hwmgr_reserve(&U301_P3V3_PGOOD_obj);
    cyhal_hwmgr_reserve(&U301_P3V3_EN_obj);
    cyhal_hwmgr_reserve(&EN_VBATT_SENSE_obj);
    cyhal_hwmgr_reserve(&U301_LED_EN_obj);
    cyhal_hwmgr_reserve(&U301_DISP_FAULT_S_obj);
    cyhal_hwmgr_reserve(&U301_INTB_IN_obj);
    cyhal_hwmgr_reserve(&U301_PDB_obj);
    cyhal_hwmgr_reserve(&DIM_obj);
    cyhal_hwmgr_reserve(&U301_LED_INT_obj);
    cyhal_hwmgr_reserve(&U301_BISTEN_obj);
    cyhal_hwmgr_reserve(&U301_DISP_GLOBAL_RESET_obj);
    cyhal_hwmgr_reserve(&DEBUG_UART_RX_obj);
    cyhal_hwmgr_reserve(&DEBUG_UART_TX_obj);
#endif /* defined (CY_USING_HAL) */
}
