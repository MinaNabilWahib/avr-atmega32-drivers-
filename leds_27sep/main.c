/*
 * main.c
 *
 *  Created on: Aug 16, 2019
 *      Author: minanabil
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "avr/delay.h"

int main(void){

	DIO_voidInitialize();
	LED_voidInitialize();
	u32 count =0;

	while (1){
		if(count % 20==0){
			LED_voidToggle(LED_0);

		}
		if(count %35 ==0) {
			LED_voidToggle(LED_1);

		}
		if(count % 42==0){
			LED_voidToggle(LED_2);

		}
		if(count % 57==0){
			LED_voidToggle(LED_3);

		}
		if(count % 61 ==0){
			LED_voidToggle(LED_4);

		}
		_delay_ms(10);
		count++;




	}

	return 0;

}


