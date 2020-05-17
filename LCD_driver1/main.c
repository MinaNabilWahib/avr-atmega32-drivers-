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


	DIO_voidInitialize();
	LCD_voidInitialize();
	u8 test[] = "TESTING";

	while(1){
		//LCD_ClrScreen();
		LCD_voidWriteChar('m');
		LCD_voidWriteChar('i');


		/*LCD_voidWriteChar('i');

		LCD_voidWriteChar('n');


		LCD_voidWriteChar('a');
		*/
		_delay_ms(5000);
		//

	}

}
