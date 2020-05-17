/*
 * SEVSEG_prog.c
 *
 *  Created on: Aug 23, 2019
 *      Author: minanabil
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"
#include "SEVSEG_priv.h"
#include "SEVSEG_config.h"
#include "SEVSEG_int.h"

void SEVSEG_voidInitialize(void){

}

void SEVSEG_voidDisplay(u8 SegNum ,u8 Num){


	#if(SEGMENT_TYPE==COMMON_ANODE)
	{

		switch(SegNum){

		case SEG_1:
			switch(Num){
			case 0:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 1:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 2:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 3:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 4:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 5:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 6:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 7:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 8:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 9:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;


			}
		break;
		case SEG_2:
			switch(Num){
			case 0:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,HIGH);

			break;
			case 1:

				DIO_voidSetPin(SEG2_PINA,HIGH);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,HIGH);

			break;
			case 2:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,HIGH);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 3:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 4:

				DIO_voidSetPin(SEG2_PINA,HIGH);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 5:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,HIGH);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 6:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,HIGH);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 7:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,HIGH);

			break;
			case 8:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 9:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,LOW);
			break;


		break;


		}
	}



}
#elif(SEGMENT_TYPE==COMMON_CATHODE)
{

		switch(SegNum){

		case SEG_1:
			switch(Num){
			case 0:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 1:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 2:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,LOW);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 3:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 4:

				DIO_voidSetPin(SEG1_PINA,LOW);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 5:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 6:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,LOW);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 7:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,LOW);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,LOW);
				DIO_voidSetPin(SEG1_PING,LOW);

			break;
			case 8:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,HIGH);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;
			case 9:

				DIO_voidSetPin(SEG1_PINA,HIGH);
				DIO_voidSetPin(SEG1_PINB,HIGH);
				DIO_voidSetPin(SEG1_PINC,HIGH);
				DIO_voidSetPin(SEG1_PIND,HIGH);
				DIO_voidSetPin(SEG1_PINE,LOW);
				DIO_voidSetPin(SEG1_PINF,HIGH);
				DIO_voidSetPin(SEG1_PING,HIGH);

			break;


			}
		break;
		case SEG_2:
			switch(Num){
			case 0:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,HIGH);

			break;
			case 1:

				DIO_voidSetPin(SEG2_PINA,HIGH);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,HIGH);

			break;
			case 2:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,HIGH);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 3:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 4:

				DIO_voidSetPin(SEG2_PINA,HIGH);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 5:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,HIGH);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 6:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,HIGH);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 7:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,HIGH);
				DIO_voidSetPin(SEG2_PINF,HIGH);
				DIO_voidSetPin(SEG2_PING,HIGH);

			break;
			case 8:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,LOW);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PINF,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);

			break;
			case 9:

				DIO_voidSetPin(SEG2_PINA,LOW);
				DIO_voidSetPin(SEG2_PINB,LOW);
				DIO_voidSetPin(SEG2_PINC,LOW);
				DIO_voidSetPin(SEG2_PIND,HIGH);
				DIO_voidSetPin(SEG2_PINE,LOW);
				DIO_voidSetPin(SEG2_PING,LOW);
			break;

		break;


		}
}

#endif
}


void SEVSEG_voidEnable(u8 SegNum){

	#if(SEGMENT_TYPE==COMMON_ANODE)
	{

		switch(SegNum){
		case SEG_1:
			DIO_voidSetPin(SEG1_PIN_ENABLE,HIGH);
		break;
		case SEG_2:
			DIO_voidSetPin(SEG1_PIN_ENABLE,HIGH);
		break;
		}

	}
	#elif(SEGMENT_TYPE==COMMON_CATHODE)
	{

		switch(SegNum){

		case SEG_1:
			DIO_voidSetPin(SEG1_PIN_ENABLE,LOW);
		break;
		case SEG_2:
			DIO_voidSetPin(SEG1_PIN_ENABLE,LOW);
		break;
				}

	}
	#endif


}

void SEVSEG_voidDisable(u8 SegNum)
{

	#if(SEGMENT_TYPE==COMMON_ANODE)
	{

			switch(SegNum){
			case SEG_1:
				DIO_voidSetPin(SEG1_PIN_ENABLE,LOW);
			break;
			case SEG_2:
				DIO_voidSetPin(SEG1_PIN_ENABLE,LOW);
			break;
			}

	}
	#elif(SEGMENT_TYPE==COMMON_CATHODE)
	{

			switch(SegNum)
			{

			case SEG_1:
				DIO_voidSetPin(SEG1_PIN_ENABLE,HIGH);
			break;
			case SEG_2:
				DIO_voidSetPin(SEG1_PIN_ENABLE,HIGH);
			break;
			}

	}
	#endif


}








