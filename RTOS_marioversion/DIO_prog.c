/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 25/1/2018		                     */
/* version : V01		                     */

/*eltarteb bta3 el include mohem gdn */
/* awel 7aga ba3melaha include el 7agat ele fe folder LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*b3den awel include fel driver files hwa el REG 3shan da maby3tmdsh 3la 7aga*/
#include "DIO_reg.h"
/* el5na2a ben el priv wel config nshof men by3tmd 3la men */
/* hena config by3tmd 3la priv */
#include "DIO_priv.h"
#include "DIO_config.h"
/* w 3latol el int hwa el a5er 3shan by3tmd 3la kol ele fat*/
#include "DIO_int.h"


#define DIO_GROUPA_DIRECTION CONCBIT(DIO_u8_PIN_DIR_7, DIO_u8_PIN_DIR_6, DIO_u8_PIN_DIR_5, DIO_u8_PIN_DIR_4, DIO_u8_PIN_DIR_3, DIO_u8_PIN_DIR_2, DIO_u8_PIN_DIR_1, DIO_u8_PIN_DIR_0)
#define DIO_GROUPB_DIRECTION CONCBIT(DIO_u8_PIN_DIR_15, DIO_u8_PIN_DIR_14, DIO_u8_PIN_DIR_13, DIO_u8_PIN_DIR_12, DIO_u8_PIN_DIR_11, DIO_u8_PIN_DIR_10, DIO_u8_PIN_DIR_9, DIO_u8_PIN_DIR_8)
#define DIO_GROUPC_DIRECTION CONCBIT(DIO_u8_PIN_DIR_23, DIO_u8_PIN_DIR_22, DIO_u8_PIN_DIR_21, DIO_u8_PIN_DIR_20, DIO_u8_PIN_DIR_19, DIO_u8_PIN_DIR_18, DIO_u8_PIN_DIR_17, DIO_u8_PIN_DIR_16)
#define DIO_GROUPD_DIRECTION CONCBIT(DIO_u8_PIN_DIR_31, DIO_u8_PIN_DIR_30, DIO_u8_PIN_DIR_29, DIO_u8_PIN_DIR_28, DIO_u8_PIN_DIR_27, DIO_u8_PIN_DIR_26, DIO_u8_PIN_DIR_25, DIO_u8_PIN_DIR_24)

void DiO_voidInitialize(void)
{
	DDRA = DIO_GROUPA_DIRECTION;
	DDRB = DIO_GROUPB_DIRECTION;
	DDRC = DIO_GROUPC_DIRECTION;
	DDRD = DIO_GROUPD_DIRECTION;
}

void DIO_voidSetPinValue(u8 Copy_u8PinIndx, u8 Copy_u8PinVal)
{
	if((Copy_u8PinIndx >= DIO_u8_PORTA_START) && (Copy_u8PinIndx <= DIO_u8_PORTA_END))
	{
		if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTA, Copy_u8PinIndx);
		}
		else
		{
			CLRBIT(PORTA, Copy_u8PinIndx);
		}
		
	}
	
	else if( (Copy_u8PinIndx >= DIO_u8_PORTB_START) && (Copy_u8PinIndx <= DIO_u8_PORTB_END))
	{
		Copy_u8PinIndx -= DIO_u8_PORTA_SIZE;		
		if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTB, Copy_u8PinIndx);
		}
		else
		{
			CLRBIT(PORTB, Copy_u8PinIndx);
		}
	}
	
	else if( (Copy_u8PinIndx >= DIO_u8_PORTC_START) && (Copy_u8PinIndx <= DIO_u8_PORTC_END))
	{
		Copy_u8PinIndx -= (DIO_u8_PORTA_SIZE + DIO_u8_PORTB_SIZE);		
		if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTC, Copy_u8PinIndx);
		}
		else
		{
			CLRBIT(PORTC, Copy_u8PinIndx);
		}
	}
	
	else if( Copy_u8PinIndx >= DIO_u8_PORTD_START && Copy_u8PinIndx <= DIO_u8_PORTD_END)
	{
		Copy_u8PinIndx -= (DIO_u8_PORTA_SIZE + DIO_u8_PORTB_SIZE + DIO_u8_PORTC_SIZE);		
		if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTD, Copy_u8PinIndx);
		}
		else
		{
			CLRBIT(PORTD, Copy_u8PinIndx);
		}
	}
}
