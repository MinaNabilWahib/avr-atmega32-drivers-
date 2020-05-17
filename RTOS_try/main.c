/*
 * main.c
 *
 *  Created on: Sep 27, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "TIM0_int.h"
#include "GIE_int.h"
#include "RTOS_int.h"
#include "avr/delay.h"

extern u8 flag;
u8 reg=82;
int main(void)
{
	DIO_voidInitialize();
	LED_voidInitialize();
	TIM0_voidInitialize();
	GIE_voidEnable();
	TIM0_voidEnableInt();
	RTOS_initialize();


	while(1)
	{
		if(flag==1)
		{
			scheduler();

		}

	}

	return 0;
}


