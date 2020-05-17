/*
 * main.c
 *
 *  Created on: Sep 7, 2019
 *      Author: minanabil
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SEVSEG_int.h"
#include "ADC_int.h"
#include "avr/delay.h"

int main(void)
{
	DIO_voidInitialize();
	SEVSEG_voidInitialize();
	ADC_voidInitialize();
	ADC_voidEnable();
	SEVSEG_voidEnable(SEG_2);

	u32 d_result;
	u32 a_result;

	while(1)
	{
		ADC_voidStartConv();
		d_result=ADC_u8GetResult(0);
		a_result = d_result*(5000/256);
		if(a_result>=0 && a_result<=100)
		{
			SEVSEG_voidDisplay(SEG_2,1);
		}else if (a_result>100 && a_result<=200)
		{
			SEVSEG_voidDisplay(SEG_2,2);
		}else if (a_result>200 && a_result<=300)
		{
			SEVSEG_voidDisplay(SEG_2,3);
		}else if (a_result>400 && a_result<=500)
		{
			SEVSEG_voidDisplay(SEG_2,4);
		}else if (a_result>500 && a_result<=5000)
		{
			SEVSEG_voidDisplay(SEG_2,5);
		}

		_delay_ms(5000);




	}
	return 0;
}
