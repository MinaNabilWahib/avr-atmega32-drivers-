/*
 * main.c
 *
 *  Created on: Aug 21, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "SWITCH_int.h"
#include "avr/delay.h"



int main(void){
	DIO_voidInitialize();
	LED_voidInitialize();
	SWITCH_voidInitialize();
	while(1){
		if(SWITCH_u8State(SWITCH_8)==ON){
			LED_voidON(LED_0);
		}else{
			LED_voidOff(LED_0);
		}

	}



	return 0;
}


