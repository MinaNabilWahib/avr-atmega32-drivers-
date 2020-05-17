/*
 * main.c
 *
 *  Created on: Aug 16, 2019
 *      Author: minanabil
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "avr/delay.h"

int main(void){

	DIO_voidInitialize();
	while (1){

		DIO_voidSetPin(PIN_0,HIGH);
		_delay_ms(1000);
		DIO_voidSetPin(PIN_0,LOW);
		_delay_ms(1000);


	}

	return 0;

}


