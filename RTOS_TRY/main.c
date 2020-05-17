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
#define RTO_u8_TIM_INIT		82

int main(void)
{
	DIO_voidInitialize();
	GIE_voidEnable();

	LED_voidInitialize();
	TIM0_voidSetRegister(RTO_u8_TIM_INIT);
	TIM0_voidInitialize();
	TIM0_voidEnableInt();
	RTOS_initialize();


	while(1)
	{
		/*if(flag==1)
		{
			scheduler();

		}*/

	}

	return 0;
}


