#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr\delay.h"

#include "DIO_int.h"

#include "KEYPAD_config.h"
#include "KEYPAD_priv.h"
#include "KEYPAD_int.h"



u16 Global_u16Result ;

extern u16 KEYPAD_u16GetKPStatus(void)
{
	

	/* Generate sequence 1 */
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_1, DIO_u8_LOW);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_2, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_3, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_4, DIO_u8_HIGH);
	voidCheckInputs(0);


	/* Generate sequence 2 */
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_1, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_2, DIO_u8_LOW);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_3, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_4, DIO_u8_HIGH);
	voidCheckInputs(1);

	/* Generate sequence 3 */
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_1, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_2, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_3, DIO_u8_LOW);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_4, DIO_u8_HIGH);
	voidCheckInputs(2);
	
	
	/* Generate sequence 4 */
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_1, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_2, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_3, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUTPUT_4, DIO_u8_LOW);
	voidCheckInputs(3);
	
	return Global_u16Result;
	
}


static void voidCheckInputs (u8 Copy_u8SequenceNumber)
{
	//u16 Global_u16Result ;
	if(DIO_u8GetPinValue(KEYPAD_u8_INPUT_1) == DIO_u8_LOW)
	{
		SETBIT(Global_u16Result, Copy_u8SequenceNumber);
	}
	else
	{
		CLRBIT(Global_u16Result, Copy_u8SequenceNumber);
	}
	
	if(DIO_u8GetPinValue(KEYPAD_u8_INPUT_2) == DIO_u8_LOW)
	{
		SETBIT(Global_u16Result, Copy_u8SequenceNumber+4);
	}
	else
	{
		CLRBIT(Global_u16Result, Copy_u8SequenceNumber+4);
	}
	
	if(DIO_u8GetPinValue(KEYPAD_u8_INPUT_3) == DIO_u8_LOW)
	{
		SETBIT(Global_u16Result, Copy_u8SequenceNumber+8);
	}
	else
	{
		CLRBIT(Global_u16Result, Copy_u8SequenceNumber+8);
	}
	
	
	if(DIO_u8GetPinValue(KEYPAD_u8_INPUT_4) == DIO_u8_LOW)
	{
		SETBIT(Global_u16Result, Copy_u8SequenceNumber+12);
	}
	else
	{
		CLRBIT(Global_u16Result, Copy_u8SequenceNumber+12);
	}
//	return Global_u16Result;

}



