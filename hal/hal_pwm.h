/******************************************************************************
;       Program		: HAL_PWM.h
;       Function	: Declare tcpwm hal & variable
;       Chip		: Cypress CY8C4149AZI-S598
;       Clock		: IMO Internal 48MHz
;       Date		:
;       Author		:
******************************************************************************/
#pragma once

#ifndef HAL_PWM_H
#define HAL_PWM_H

/*---------------------------- Include File ---------------------------------*/
/*---------------------------- Define Constant ------------------------------*/
#define		UNIT_DUTY			327U
#define		DUTY_CORRECTION		0.002
#define		RSLT_FAIL			0x01U
//#define 	PWM_MASK			( 1UL <<  )
/*---------------------------- Declare Function -----------------------------*/
uint32_t HAL_PWM_CH4_Init(void);
void HAL_PWM_CH4_DeInit(void);
void HAL_PWM_Duty_Output(uint32_t u32Channel, uint8_t u8Duty);
void HAL_PWM_Duty_Output_Adjust(uint32_t u32Channel, uint32_t u32DutyAdjust);

#endif /* HAL_PWM_H_ */
