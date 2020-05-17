/*
 * main.c
 *
 *  Created on: Aug 31, 2019
 *      Author: minanabil
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "EXTI_int.h"
#include "GIE_int.h"
#include "avr/delay.h"

void EXTI_ISR(void);
int main(void){

	DIO_voidInitialize();
	LED_voidInitialize();
	EXTI_voidInitialize();
	GIE_voidEnable();
	EXTI_voidSetInt0Callback(EXTI_ISR);
	EXTI_voidEnableInt0();

	while(1){



	}

	return 0;
}
void EXTI_ISR(void){

	LED_voidToggle(LED_0);

	/*if(DIO_u8GetPin(PIN_26)==LOW){
		LED_voidOff(LED_0);
	}else if (DIO_u8GetPin(PIN_26)==HIGH){
		LED_voidON(LED_0);
	}*/

	}

