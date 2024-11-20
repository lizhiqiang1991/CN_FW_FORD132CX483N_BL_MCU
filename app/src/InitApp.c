/******************************************************************************
;       Program		: InitApp.c 
;       Function	: Initialize Interfaces and State Machine Setting.
;       Chip		: Cypress CYT2B6
;       Clock		:
;       Date		: 2021 / 10 / 08
;       Author		: Joel Wang
;       Describe 	: 
******************************************************************************/
/*---------------------------- Include File ---------------------------------*/
#include "InitApp.h"
/*---------------------------- Declare Global Variable ----------------------*/
static uint8_t gu8StateMachineStep = (uint8_t)(BL_STARTUP);
/*---------------------------- Start Program --------------------------------*/
/******************************************************************************
;       Function Name			:	uint8_t InitApp_Startup_Init(uint8_t u8Para)
;       Function Description	:	Initialize startup interface.
;       Parameters				:	[u8Para] - NOTHING
;       Return Values			:	NOTHING
;		Source ID				:
******************************************************************************/
uint8_t InitApp_Startup(uint8_t u8Para)
{	
    (void)FunApp_Nvic_Init(NOTHING);

	(void)(u8Para);
	return u8Para;
}

/******************************************************************************
;       Function Name			:	uint8_t InitApp_All(uint8_t u8Para)
;       Function Description	:	Initialize all interface.
;       Parameters				:	[u8Para] - NOTHING
;       Return Values			:	NOTHING
;		Source ID				:
******************************************************************************/
uint8_t InitApp_All(uint8_t u8Para)
{
	I2c3SlaveApp_Init(NOTHING);
	
	(void)PinIOApp_Power_Sequence(SYS_PWR_ON);
    
	(void)InitApp_StateMachine_Set(BL_UPDATE);			/* Jump to BL_UPDATE state */
    
	//HAL_UART_Printf("All interface initial ready!\r\n");

	(void)(u8Para);
	return (u8Para);
}

/******************************************************************************
;       Function Name			:	void InitApp_Startup_DeInit(void)
;       Function Description	:
;       Parameters				:
;       Return Values			:
;		Source ID				:
******************************************************************************/
void InitApp_Startup_DeInit(void)
{
    (void)PinIOApp_Power_Sequence(SYS_PWR_OFF);
    
    ASM_SYS_RESET();    /* Software reset */
}

/******************************************************************************
;       Function Name			:	uint8_t InitApp_StateMachine_Get(void)
;       Function Description	:	Get state machine status.
;       Parameters				:	void
;       Return Values			:	Return present state.
;		Source ID				:
******************************************************************************/
uint8_t InitApp_StateMachine_Get(void)
{
	return gu8StateMachineStep;
}

/******************************************************************************
;       Function Name			:	uint8_t InitApp_StateMachine_Set(uint8_t u8State)
;       Function Description	:	Set state machine status.
;       Parameters				:	void
;       Return Values			:	Return present state.
;		Source ID				:
******************************************************************************/
uint8_t InitApp_StateMachine_Set(uint8_t u8State)
{
	gu8StateMachineStep = u8State;
	return gu8StateMachineStep;
}
/*---------------------------------------------------------------------------*/ 
