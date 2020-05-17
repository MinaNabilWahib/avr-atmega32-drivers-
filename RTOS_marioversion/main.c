/*
 * main.c
 *
 *  Created on: 10 Mar 2018
 *      Author: MarioSonlord
 */



#include "STD_TYPES.h"

#include "BIT_MATH.h"

#include "avr/delay.h"
#include "DIO_int.h"
#include "LCD_int.h"

#include "GIE_int.h"

#include "TIM0_int.h"
#include "RTO_int.h"



#define RTO_u8_TIM_INIT		112


void main(void)
{
	DiO_voidInitialize();
	GIE_voidEnable();

	LCD_voidInitialize();
	LCD_voidWriteCmd(0b01000000);//5alet el AC yshawer 3la address 0x00 fel CGRAM


	/* 7arf el waw bel3aaraby*/
	LCD_voidWriteData(0);		 //write 0 on adress 0x00
	LCD_voidWriteData(14);       //write 0 on adress 0x01 (el AC by auto increment)
	LCD_voidWriteData(10);
	LCD_voidWriteData(15);
	LCD_voidWriteData(2);
	LCD_voidWriteData(4);
	LCD_voidWriteData(8);
	LCD_voidWriteData(0);


	/* 7arf el yeh bel3aaraby*/
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(2);
	LCD_voidWriteData(30);
	LCD_voidWriteData(0);
	LCD_voidWriteData(10);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);

	/* 7arf el rah bel3aaraby*/
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(2);
	LCD_voidWriteData(2);
	LCD_voidWriteData(4);
	LCD_voidWriteData(8);
	LCD_voidWriteData(16);


	/* 7arf el alef bel3aaraby*/
		LCD_voidWriteData(4);
		LCD_voidWriteData(4);
		LCD_voidWriteData(4);
		LCD_voidWriteData(7);
		LCD_voidWriteData(0);
		LCD_voidWriteData(0);
		LCD_voidWriteData(0);
		LCD_voidWriteData(0);

	/* 7arf el mem bel3aaraby*/
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);
	LCD_voidWriteData(31);
	LCD_voidWriteData(5);
	LCD_voidWriteData(7);
	LCD_voidWriteData(0);
	LCD_voidWriteData(0);



	TIM0_voidSetRegister(RTO_u8_TIM_INIT);
	TIM0_voidInitialize();

	TIM0_voidEnableInt();

	RTO_voidInitialize();
	while(1)
	{

	}
}

/*
void main(void)
{
	DiO_voidInitialize();
	DIO_voidSetPinValue(24, DIO_u8_LOW);

	while(1)
	{
		for(u8 i = 24; i<32; i++)
		{
			DIO_voidSetPinValue(i, DIO_u8_HIGH);
			_delay_ms(500);
		}
	}
}*/

