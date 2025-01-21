/******************************************************************************
;				Program		:	PinIO.c 
;				Function	:	GPIO Sensing Function
;				Chip		:	Cypress CY8C4149AZI-S598
;				Clock		:	IMO Internal 48MHz
;				Date		:	2021 / 12 / 27
;				Author		:	Fenderson Lu
;				Describe	:	
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "InitApp.h"
/*---------------------------- Declare Global Variable ----------------------*/
/*---------------------------- Start Program --------------------------------*/


/******************************************************************************
;       Function Name			:	
;       Function Description	:	
;       Parameters				:	
;       Return Values			:	
;		Source ID				:	
******************************************************************************/
bool PinIOApp_Power_Sequence(uint8_t u8Switch)
{
	uint8_t u8PGLevel;
    uint8_t u8Return;
	switch(u8Switch)
	{
		case SYS_PWR_ON:
			//HAL_GPIO_Low( U301_FCS_PORT, U301_FCS_PIN);
            //HAL_GPIO_Low( U301_DBIST_PORT, U301_DBIST_PIN);
            //HAL_GPIO_Low( U301_DISP_SLEEPIN_PORT, U301_DISP_SLEEPIN_PIN);
            //HAL_GPIO_Low( U301_DISP_MUTE_PORT, U301_DISP_MUTE_PIN);
            //HAL_GPIO_Low( U301_UD_PORT, U301_UD_PIN);

            HAL_GPIO_High( U301_HV_LDO_EN_PORT, U301_HV_LDO_EN_PIN);
            HAL_GPIO_High( U301_P3V3_EN_PORT, U301_P3V3_EN_PIN);
            Cy_SysLib_Delay(10U);
            HAL_GPIO_Read(U301_P3V3_PGOOD_PORT, U301_P3V3_PGOOD_PIN, &u8PGLevel);

            if (u8PGLevel == HIGH_LEVEL)
            {
                //HAL_UART_Printf("=> P3V3 successful ...\n");
                HAL_GPIO_High( U301_P1V2_EN_PORT, U301_P1V2_EN_PIN);

                //HAL_GPIO_High( U301_SS_PORT, U301_SS_PIN);
                HAL_GPIO_High( U301_TSC_RESET_PORT, U301_TSC_RESET_PIN);
                Cy_SysLib_Delay(10U);
                HAL_GPIO_Read(U301_P1V2_PGOOD_PORT, U301_P1V2_PGOOD_PIN, &u8PGLevel);

                if (u8PGLevel == HIGH_LEVEL)
                {
                    //HAL_UART_Printf("=> P1V2 successful ...\n");
                    Cy_SysLib_Delay(1U);
                    HAL_GPIO_High( U301_PDB_PORT, U301_PDB_PIN);
                    Cy_SysLib_Delay(10U);
                    HAL_GPIO_High( U301_DISP_GLOBAL_RESET_PORT, U301_DISP_GLOBAL_RESET_PIN);
                    u8Return = POWER_PASS;
                }
                else
                {
                    //HAL_UART_Printf("=> P1V2 fail ...\n");
                    u8Return = P1V2_FAIL;
                }
            }
            else
            {
                //HAL_UART_Printf("=> P3V3 fail ...\n");
                u8Return = P3V3_FAIL;
            }
			break;
		case SYS_PWR_OFF:
			Cy_SysLib_Delay(100U);
            HAL_GPIO_Low( U301_DISP_GLOBAL_RESET_PORT, U301_DISP_GLOBAL_RESET_PIN);
            Cy_SysLib_Delay(10U);
            HAL_GPIO_Low( U301_TSC_RESET_PORT, U301_TSC_RESET_PIN);
            //HAL_GPIO_High( U301_FCS_PORT, U301_FCS_PIN);

            HAL_GPIO_Low( U301_PDB_PORT, U301_PDB_PIN);
            HAL_GPIO_Low( U301_P1V2_EN_PORT, U301_P1V2_EN_PIN);
            HAL_GPIO_Low( U301_P3V3_EN_PORT, U301_P3V3_EN_PIN);

            HAL_GPIO_Low( U301_HV_LDO_EN_PORT, U301_HV_LDO_EN_PIN);

            u8Return = POWER_PASS;
		break;		

		default:
		break;
	}

	return u8Return;	
}

/******************************************************************************
;       Function Name			:	uint8_t PinIOApp_Init(uint8_t u8Para)
;       Function Description	:	Initialize all pin.
;       Parameters				:	[u8Para] - NOTHING
;       Return Values			:	NOTHING
;		Source ID				:	
******************************************************************************/
uint8_t PinIOApp_Init(uint8_t u8Para)
{

	(void)(u8Para);
	return  (u8Para);
}

/*---------------------------------------------------------------------------*/ 


