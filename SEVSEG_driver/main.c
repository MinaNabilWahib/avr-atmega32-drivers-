/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SEVSEG_int.h"
#include "avr/delay.h"

int main(void){
	DIO_voidInitialize();
	SEVSEG_voidInitialize();
	SEVSEG_voidEnable(SEG_1);

	while(1){
		SEVSEG_voidDisplay(SEG_1,5);
		_delay_ms(5000);
		SEVSEG_voidDisplay(SEG_1,8);
		_delay_ms(5000);

	}


	return 0;
}


