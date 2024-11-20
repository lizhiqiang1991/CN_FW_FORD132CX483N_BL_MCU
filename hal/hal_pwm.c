/******************************************************************************
;				Program		:	HAL_PWM.c
;				Function	:	PWM Function
;				Chip		:	Cypress CY8C4149AZI-S598
;				Clock		:	IMO Internal 48MHz
;				Date		:	2021 / 09 / 03
;				Author		:
;				Describe	:	PWM Output Setting:
;								(1) PWM4 frequency is 500Hz
;								(2) PWM4 period counter are 32768.
;								(3) PWM4 pin is P8.0.
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include <Boot_main.h>
#include "hal_pwm.h"
/*---------------------------- Declare Global Variable ----------------------*/
/*---------------------------- Start Program --------------------------------*/
/******************************************************************************
;       Function Name			:	uint32_t HAL_PWM_CH4_Init(void)
;       Function Description	:	Initialize PWM channel 4 output function.
;       Parameters				:	void
;       Return Values			:	Return initial status.
;		Source ID				:	U625_PWM-001
******************************************************************************/
uint32_t HAL_PWM_CH4_Init(void)
{
	cy_rslt_t cyStatus;

    cyStatus = Cy_TCPWM_PWM_Init(PWM_OUT_DIM_HW, PWM_OUT_DIM_NUM, &PWM_OUT_DIM_config);
    if(cyStatus == CY_TCPWM_SUCCESS)
    {
    	Cy_TCPWM_PWM_Enable(PWM_OUT_DIM_HW, PWM_OUT_DIM_NUM);				/* Enable the initialized PWM */
//    	Cy_TCPWM_TriggerStart(PWM4_OUT_DIM_HW, PWM4_OUT_DIM_MASK);			/* Then start the PWM */
		Cy_TCPWM_TriggerReloadOrIndex(PWM_OUT_DIM_HW, PWM_OUT_DIM_MASK);	/* Then start the PWM */

    }
	else
	{
		cyStatus = RSLT_FAIL;
	}

	return cyStatus;
}
/******************************************************************************
;       Function Name			:	void HAL_PWM_CH4_DeInit(void)
;       Function Description	:	PWM deinit
;       Parameters				:
;       Return Values			:
;		Source ID				:	U625_PWM-002
******************************************************************************/
void HAL_PWM_CH4_DeInit(void)
{
	HAL_PWM_Duty_Output(PWM_OUT_DIM_NUM, 0);
	Cy_TCPWM_PWM_Disable(PWM_OUT_DIM_HW, PWM_OUT_DIM_NUM);
}


/******************************************************************************
;       Function Name			:	void HAL_PWM_Duty_Output(uint32_t u32Channel, uint8_t u8Duty)
;       Function Description	:	Output PWM duty cycles.
;       Parameters				:	[u32Channel] - PWM output channel.
;									[u8Duty] - Duty range 0% ~ 100%, unit is 1%.
;       Return Values			:	Return initial status.
;		Source ID				:	U625_PWM-002
******************************************************************************/
void HAL_PWM_Duty_Output(uint32_t u32Channel, uint8_t u8Duty)
{
	float fDutyAdjust = 0.0;

	fDutyAdjust = (UNIT_DUTY * u8Duty) + ((u8Duty * UNIT_DUTY) * DUTY_CORRECTION);
//	while (0UL == (CY_TCPWM_INT_ON_CC & Cy_TCPWM_GetInterruptMask(PWM4_OUT_DIM_HW, PWM4_OUT_DIM_NUM)));	//avoid pwm working is not completed
    (void)Cy_TCPWM_PWM_SetCompare0(TCPWM, u32Channel, (uint32_t)(fDutyAdjust));
}


/******************************************************************************
;       Function Name			:	void HAL_PWM_Duty_Output_Adjust(uint32_t u32Channel, uint32_t u32DutyAdjust)
;       Function Description	:	Output PWM duty cycles.
;       Parameters				:	[u32Channel] - PWM output channel.
;									[u32DutyAdjust] - Duty range 0 ~ 32767, unit is 1.
;       Return Values			:	Return initial status.
;		Source ID				:	U625_PWM-002
;		CTWu Add 20210907
******************************************************************************/
void HAL_PWM_Duty_Output_Adjust(uint32_t u32Channel, uint32_t u32DutyAdjust)
{
	while (0UL == (CY_TCPWM_INT_ON_CC & Cy_TCPWM_GetInterruptMask(PWM_OUT_DIM_HW, PWM_OUT_DIM_NUM)));	//avoid pwm working is not completed
    Cy_TCPWM_PWM_SetCompare0(TCPWM, u32Channel, u32DutyAdjust);
}
/*---------------------------------------------------------------------------*/


