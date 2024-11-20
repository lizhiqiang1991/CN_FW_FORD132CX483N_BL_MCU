/******************************************************************************
;       Program  : Crc8.c
;       Function : CRC8 Check Function
;       Chip     : Cypress CYT2B6
******************************************************************************/

/*---------------------------- Include File ---------------------------------*/
#include "Common.h"


void Common_Debounce(uint8_t u8IOLevel, tgpio_debounce_def *ptDebounce)
{

	if((ptDebounce->u8CurrentGPIOStatus != GPIO_LOW) && (u8IOLevel == GPIO_LOW))
	{
		if(ptDebounce->u8DebounceLow < ptDebounce->u8DebounceMax)
		{
			ptDebounce->u8DebounceLow += 1U;
			ptDebounce->u8DebounceHigh = NUMBER_ZERO;
		}
		else
		{
			ptDebounce->u8NewGPIOStatus = GPIO_LOW;
		}
	}
	else if((ptDebounce->u8CurrentGPIOStatus != GPIO_HIGH) && (u8IOLevel == GPIO_HIGH))
	{
		if(ptDebounce->u8DebounceHigh < ptDebounce->u8DebounceMax)
		{
			ptDebounce->u8DebounceLow = NUMBER_ZERO;
			ptDebounce->u8DebounceHigh += 1U;
		}
		else
		{
			ptDebounce->u8NewGPIOStatus = GPIO_HIGH;
		}
	}
	else
	{

	}
}

uint8_t Common_Checksum_Calculation(uint8_t *pu8data,uint8_t u8Length)
{
	uint8_t u8ChecksumTemp= 0U;
	uint8_t u8Counter;

	for(u8Counter = 0; u8Counter < u8Length; u8Counter++)
	{
		u8ChecksumTemp = u8ChecksumTemp + *(pu8data + u8Counter);
	}
	return u8ChecksumTemp;
}

int16_t Common_Maximum(int16_t i16Arg1, int16_t i16Arg2)
{	int16_t i16Result;
	if (i16Arg1 >= i16Arg2)
	{
		i16Result = i16Arg1;
	}
	else
	{
		i16Result = i16Arg2;
	}
	return i16Result;
}
