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

	_delay_ms(31);
	LCD_voidWriteCmd(0b00101000);
	_delay_ms(1);
	LCD_voidWriteCmd(0b00001100);
	_delay_ms(1);
	LCD_voidWriteCmd(CLR_DISPLAY);
	_delay_ms(2);






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
	_delay_ms(5);
	DIO_voidSetPin(LCD_E_PIN,LOW);


}

static void LCD_writeLowNibble(u8 Data){

	DIO_voidSetPin(LCD_D7_PIN,GETBIT(Data,3));
	DIO_voidSetPin(LCD_D6_PIN,GETBIT(Data,2));
	DIO_voidSetPin(LCD_D5_PIN,GETBIT(Data,1));
	DIO_voidSetPin(LCD_D4_PIN,GETBIT(Data,0));
	DIO_voidSetPin(LCD_E_PIN,HIGH);
	_delay_ms(5);
	DIO_voidSetPin(LCD_E_PIN,LOW);


}


