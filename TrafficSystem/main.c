/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "SEVSEG_int.h"
#include "LED_int.h"
#include "SWITCH_int.h"
#include "LCD_int.h"
#include "avr/delay.h"

void check_amb(u8 LED_NUM){

	if(SWITCH_u8State(SWITCH_11)==ON){
		LED_voidOff(LED_NUM);
		LED_voidON(LED_10);
		for(u8 i = 5 ; i > 0;i--){
			SEVSEG_voidDisplay(SEG_1,i);
			LCD_voidWriteData('a');
			LCD_voidWriteData('m');
			LCD_voidWriteData('b');
			LCD_voidWriteData('u');
			LCD_voidWriteData('l');
			LCD_voidWriteData('a');
			LCD_voidWriteData('n');
			LCD_voidWriteData('c');
			LCD_voidWriteData('e');
			_delay_ms(1000);
		}
		LED_voidOff(LED_10);
		LED_voidON(LED_NUM);

	}

}


int main(void){
	DIO_voidInitialize();
	SEVSEG_voidInitialize();
	LED_voidInitialize();
	SWITCH_voidInitialize();
	SEVSEG_voidEnable(SEG_1);
	LCD_voidInitialize();

	while(1){
			LED_voidON(LED_8);
			for(u8 i = 9 ; i > 0;i--){
				SEVSEG_voidDisplay(SEG_1,i);
				LCD_voidWriteData('c');
				LCD_voidWriteData('o');
				LCD_voidWriteData('c');
				LCD_voidWriteData('a');
				check_amb(LED_8);
				_delay_ms(1000);
			}
			LED_voidOff(LED_8);
			LED_voidON(LED_9);
			for(u8 i = 5 ; i > 0;i--){
				SEVSEG_voidDisplay(SEG_1,i);
				check_amb(LED_9);
				_delay_ms(1000);
			}
			LED_voidOff(LED_9);
			LED_voidON(LED_10);
			for(u8 i = 9 ; i > 0;i--){
				SEVSEG_voidDisplay(SEG_1,i);
				check_amb(LED_10);
				_delay_ms(1000);
			}
			LED_voidOff(LED_10);






	}


	return 0;
}


