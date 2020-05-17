/*
 * main.c
 *
 *  Created on: Aug 24, 2019
 *      Author: minanabil
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "avr/delay.h"

int main(void){

	LCD_voidInitialize();
	u8 test[] = "TESTING";

	while(1){
		LCD_voidWriteData('m');
		_delay_ms(5000);
		//

	}

}
