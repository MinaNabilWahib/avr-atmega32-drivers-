/*
 * main.c
 *
 *  Created on: Sep 6, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "TIM0_int.h"
#include "GIE_int.h"
#include "avr/delay.h"



void TIMER_ISR(void);
u8 flag=0;
u8 reg = 82;

int main(void)
{
	DIO_voidInitialize();
	LED_voidInitialize();
	TIM0_voidInitialize();
	TIM0_voidSetCallBack(TIMER_ISR);
	GIE_voidEnable();
	TIM0_voidEnableInt();
	TIM0_voidSetRegister(reg);

	while(1)
	{


	}

	return 0;
}
void TIMER_ISR(void){
	flag++;
	if (flag==11){
		TIM0_voidSetRegister(reg);
		LED_voidToggle(LED_7);
		flag =0;
	}

}

