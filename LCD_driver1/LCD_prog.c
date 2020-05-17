/*
 * LCD_prog.c
 *
 *  Created on: ??�/??�/????
 *      Author: MAGO
 */
#include <stdio.h>
#include <stdarg.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LCD_priv.h"
#include "LCD_Config.h"
#include "LCD_int.h"
//#include "avr\delay.h"
#include "avr/delay.h"
void LCD_voidInitialize()
{
	_delay_ms(30);
	LCD_voidWriteCmd(0b00101000);
	_delay_ms(1);
	LCD_voidWriteCmd(0b00001100);
	_delay_ms(1);
	LCD_voidWriteCmd(1);
	_delay_ms(2);
	LCD_voidWriteCmd(0b00000110);
}

void LCD_voidWriteChar(u8 Data)
{
	DIO_voidSetPin(LCD_RS_PIN, HIGH);
	DIO_voidSetPin(LCD_RW_PIN, LOW);
	LCD_voidWriteHighNibble(Data);
	LCD_voidWriteLowNibble(Data);

}

void LCD_voidWriteCmd(u8 Cmd)
{
	DIO_voidSetPin(LCD_RS_PIN, LOW);
	DIO_voidSetPin(LCD_RW_PIN, LOW);
	LCD_voidWriteHighNibble(Cmd);
	LCD_voidWriteLowNibble(Cmd);
}


void LCD_ClrScreen()
{
	LCD_voidWriteCmd(CLR_DISP);
}

void LCD_voidGoTo(u8 x, u8 y)
{
	if(y == 0)
	{
		LCD_voidWriteCmd(0b10000000 + x);
	}
	else
	{
		LCD_voidWriteCmd(0x40 + 0b10000000 + x);
	}
}

static void LCD_voidWriteHighNibble(u8 data)
{
	DIO_voidSetPin(LCD_D7_PIN, GETBIT(data, 7));
	DIO_voidSetPin(LCD_D6_PIN, GETBIT(data, 6));
	DIO_voidSetPin(LCD_D5_PIN, GETBIT(data, 5));
	DIO_voidSetPin(LCD_D4_PIN, GETBIT(data, 4));
	DIO_voidSetPin(LCD_EN_PIN, HIGH);
	_delay_ms(5);
	DIO_voidSetPin(LCD_EN_PIN, LOW);
}

static void LCD_voidWriteLowNibble(u8 data)
{
	DIO_voidSetPin(LCD_D7_PIN, GETBIT(data, 3));
	DIO_voidSetPin(LCD_D6_PIN, GETBIT(data, 2));
	DIO_voidSetPin(LCD_D5_PIN, GETBIT(data, 1));
	DIO_voidSetPin(LCD_D4_PIN, GETBIT(data, 0));
	DIO_voidSetPin(LCD_EN_PIN, HIGH);
	_delay_ms(5);
	DIO_voidSetPin(LCD_EN_PIN, LOW);
}

void LCD_voidWriteString(u8* x)
{
	u8 i = 0;
	while(*(x+i) != '\0')
	{
		LCD_voidWriteChar(*(x + i));
		i++;
	}
}


