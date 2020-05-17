/*****************************/
/* Author : Mario Ramzy		*/
/* Date : 26/1/2018			*/
/* Version : V0				*/

#include "STD_TYPES.h"

#include "DIO_int.h"

#include "SEVSEG_priv.h"
//#include "SEVSEG_config.h"
#include "SEVSEG_config.h"

#include "SEVSEG_int.h"

void void_7SegmentDisplay(u8 Copy_u8Num)
{
	if (SEVSEG_u8_TYPE == COMMON_CATHODE)	// SEVSEG_u8_TYPE == COMMON_CATHODE
	{
		switch(Copy_u8Num)
		{
			case 0:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A , DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				break;
			case 1:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);

				break;
			case 2:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				break;
			case 3:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				break;
			case 4:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				break;
			case 5:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				break;
			case 6:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				break;
			case 7:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				break;
			
			case 8:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				break;
			
			case 9:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				break;
			
		}
	}
	else
	{
		switch(Copy_u8Num)
		{
			case 0:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				break;
			case 1:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				break;
			case 2:
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				break;
			case 3:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				break;
			case 4:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				break;
			case 5:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				break;
			case 6:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_HIGH);
				break;
			case 7:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_HIGH);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_HIGH);
				break;
			case 8:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);
				break;
			case 9:                                         
				DIO_voidSetPinValue(SEVSEG_u8_PIN_A, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_F, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_C, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_D, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_B, DIO_u8_LOW);
				DIO_voidSetPinValue(SEVSEG_u8_PIN_G, DIO_u8_LOW);

				DIO_voidSetPinValue(SEVSEG_u8_PIN_E, DIO_u8_HIGH);
				break;
		}
	}
}
