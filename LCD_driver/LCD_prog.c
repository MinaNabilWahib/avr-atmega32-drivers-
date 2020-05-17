/*
 * LCD_prog.c
 *
 *  Created on: Aug 24, 2019
 *      Author: minanabil
 */

#include "avr/io.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/delay.h"
#include "DIO_int.h"
#include "LCD_priv.h"
#include "LCD_config.h"
#include "LCD_int.h"


void LCD_voidInitialize(void){

	DIO_voidInitialize();

	/*_delay_ms(50);



*/
	_delay_ms(40);

	/*LCD_voidClrScreen();

	_delay_ms(2);

	LCD_voidWriteCmd(RETURN_HOME);

	_delay_ms(2);*/



	LCD_voidWriteCmd(LCD_FUNCTION_SET_4BIT);

	_delay_us(50);

	LCD_voidWriteCmd(LCD_DISP_ON_CURSE_OFF_BLINK_OFF);

	_delay_us(50);

	LCD_voidClrScreen();

	_delay_ms(2);

	LCD_voidWriteCmd(LCD_ENTRY_MODE);

	_delay_us(50);

/*	LCD_voidWriteCmd(LCD_BEGIN_AT_FIRST_ROW);

	_delay_ms(2);

	LCD_voidWriteCmd(RETURN_HOME);

	_delay_ms(2);
*/


}
void LCD_voidWriteData(u8 Data){

	DIO_voidSetPin(LCD_RS_PIN,HIGH);
	DIO_voidSetPin(LCD_RW_PIN,LOW);

	LCD_writeHighNibble(Data);


	LCD_writeLowNibble(Data);

}
void LCD_voidWriteCmd(u8 Cmd){


	DIO_voidSetPin(LCD_RS_PIN,LOW);
	DIO_voidSetPin(LCD_RW_PIN,LOW);

	LCD_writeHighNibble(Cmd);


	LCD_writeLowNibble(Cmd);


}
void LCD_voidClrScreen(void){

	LCD_voidWriteCmd(CLR_DISPLAY);

}

void LCD_voidGoToXY(u8 x,u8 y){



}
static void LCD_writeHighNibble(u8 Data){

	DIO_voidSetPin(LCD_D7_PIN,GETBIT(Data,7));
	DIO_voidSetPin(LCD_D6_PIN,GETBIT(Data,6));
	DIO_voidSetPin(LCD_D5_PIN,GETBIT(Data,5));
	DIO_voidSetPin(LCD_D4_PIN,GETBIT(Data,4));
	DIO_voidSetPin(LCD_E_PIN,HIGH);
	_delay_ms(1);
	DIO_voidSetPin(LCD_E_PIN,LOW);

}

static void LCD_writeLowNibble(u8 Data){

	DIO_voidSetPin(LCD_D7_PIN,GETBIT(Data,3));
	DIO_voidSetPin(LCD_D6_PIN,GETBIT(Data,2));
	DIO_voidSetPin(LCD_D5_PIN,GETBIT(Data,1));
	DIO_voidSetPin(LCD_D4_PIN,GETBIT(Data,0));
	DIO_voidSetPin(LCD_RS_PIN,HIGH);
	_delay_ms(1);
	DIO_voidSetPin(LCD_E_PIN,LOW);



}
void LCD_voidWriteString(u8 *x){

	u8 i =0 ;
	while(x[i]!='\0'){
		LCD_voidWriteData(x[i]);
		i++;
	}


}



