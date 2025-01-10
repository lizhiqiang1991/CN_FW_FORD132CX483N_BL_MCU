/******************************************************************************
;				Program		:	main.c 
;				Function	:	Main Function
;				Chip		:	Cypress CY8C4149AZI-S598
;				Clock		:	IMO Internal 48MHz
;				Date		:	2021 / 10 / 07
;				Author		:	Fenderson Lu
;				Describe	:	
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "Boot_main.h"

#include "InitApp.h"

/******************************************************************************
;       Function Name			:	void Main_UartInit(void)
;       Function Description	:
;       Parameters				:	void
;       Return Values			:
;       Source ID				:
******************************************************************************/
static void Main_UartInit(void)
{
	debug_uart_tydef tDebugUart;

	tDebugUart.pBase = DEBUG_PORT;
	tDebugUart.pConfig = &DEBUG_UART_config;
	(void)HAL_UART_Init(tDebugUart);
}

/******************************************************************************
;       Function Name			:	void Main_BspInit(void)
;       Function Description	:
;       Parameters				:	void
;       Return Values			:
;       Source ID				:
******************************************************************************/
static void Main_BspInit(void)
{
	(void)cybsp_init();
    #ifdef DEBUG_UART_EN
		(void)Main_UartInit();
	#endif
}
/******************************************************************************
;       Function Name			:	void main(void)
;       Function Description	:	Main function.
;       Parameters				:	void
;       Return Values			:
;       Source ID				:
******************************************************************************/
int Boot_main(void)
{
	Main_BspInit();
	HAL_UART_Printf("in boot program\n");
	while (true)
	{
		switch (InitApp_StateMachine_Get())
		{
		case BL_STARTUP:
			(void)InitApp_Startup(NOTHING);
			(void)FunApp_Startup_Check(NOTHING);
			break;
		case BL_INIT:
			(void)InitApp_All(NOTHING);
			break;
		case BL_UPDATE:
			I2c3SlaveApp_Flash_Operate_Process();
			break;
		default:;
			break;
		}
	}

	return 0U;
}
