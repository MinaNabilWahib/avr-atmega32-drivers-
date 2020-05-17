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

	while(1){
		LED_voidON(LED_0);
		_delay_ms(300);
		LED_voidToggle(LED_0);
		_delay_ms(300);

	}

	return 0;

}

