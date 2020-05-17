/*
 * KEYPAD_prog.c
 *
 *  Created on: Sep 6, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "KEYPAD_priv.h"
#include "KEYPAD_config.h"
#include "KEYPAD_int.h"
#include "avr/delay.h"


void KEYPAD_voidInitialize(void)
{

}

u16 KEYPAD_u16PressedKey(void)
{
	u16 ret;
	DIO_voidSetPin(KEYPAD_PIN_C3,HIGH);
	DIO_voidSetPin(KEYPAD_PIN_C1,HIGH);
	DIO_voidSetPin(KEYPAD_PIN_C1,LOW);
	if(DIO_u8GetPin(KEYPAD_PIN_R1)==HIGH)
	{

		ret = 0000000000000100;
	}
	else if (DIO_u8GetPin(KEYPAD_PIN_R2)==HIGH)
	{

		ret = 0000000000100000;


	}
	else if(DIO_u8GetPin(KEYPAD_PIN_R3)==HIGH)
	{

		ret = 0000000100000000;

	}
	_delay_ms(5);
	DIO_voidSetPin(KEYPAD_PIN_C3,HIGH);
	DIO_voidSetPin(KEYPAD_PIN_C1,LOW);
	DIO_voidSetPin(KEYPAD_PIN_C1,HIGH);
	if(DIO_u8GetPin(KEYPAD_PIN_R1)==HIGH)
	{

		ret = 0000000000000010;
	}
	else if (DIO_u8GetPin(KEYPAD_PIN_R2)==HIGH)
	{

		ret = 0000000000001000;


	}
	else if(DIO_u8GetPin(KEYPAD_PIN_R3)==HIGH)
	{

		ret = 0000000010000000;

	}
	_delay_ms(5);
	DIO_voidSetPin(KEYPAD_PIN_C3,LOW);
	DIO_voidSetPin(KEYPAD_PIN_C1,HIGH);
	DIO_voidSetPin(KEYPAD_PIN_C1,HIGH);
	if(DIO_u8GetPin(KEYPAD_PIN_R1)==HIGH)
	{

		ret = 0000000000000001;
	}
	else if (DIO_u8GetPin(KEYPAD_PIN_R2)==HIGH)
	{

		ret = 000000000010000;


	}
	else if(DIO_u8GetPin(KEYPAD_PIN_R3)==HIGH)
	{

		ret = 0000000010000000;

	}
	_delay_ms(5);
	return ret;


}

