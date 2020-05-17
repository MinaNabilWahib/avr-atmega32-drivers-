/*
 * DIO_prog.c
 *
 *  Created on: Aug 16, 2019
 *      Author: minanabil
 */
#include "avr/io.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_priv.h"
#include "DIO_config.h"
#include "DIO_int.h"

void DIO_voidInitialize(void){

	DDRA = CONCBIT(PIN_7DIR,PIN_6DIR,PIN_5DIR,PIN_4DIR,PIN_3DIR,PIN_2DIR,PIN_1DIR,PIN_0DIR);
	DDRB = CONCBIT(PIN_15DIR,PIN_14DIR,PIN_13DIR,PIN_12DIR,PIN_11DIR,PIN_10DIR,PIN_9DIR,PIN_8DIR);
	DDRC = CONCBIT(PIN_23DIR,PIN_22DIR,PIN_21DIR,PIN_20DIR,PIN_19DIR,PIN_18DIR,PIN_17DIR,PIN_16DIR);
	DDRD = CONCBIT(PIN_31DIR,PIN_30DIR,PIN_29DIR,PIN_28DIR,PIN_27DIR,PIN_26DIR,PIN_25DIR,PIN_24DIR);

}

void DIO_voidSetPin(u8 PinNum,u8 Value){
    if (Value==HIGH){

        if((PinNum>=0 && PinNum<8)){
            SETBIT(PORTA,PinNum);
        }else if((PinNum>=8) && (PinNum<16)){
        	SETBIT(PORTB,PinNum-8);
        }else if((PinNum>=16) && (PinNum<24)){
        	SETBIT(PORTC,PinNum-16);
        }else if((PinNum>=24) && (PinNum<32)){
        	SETBIT(PORTD,PinNum-16);
        }

    }else if (Value==LOW){

    	if((PinNum>=0 && PinNum<8)){
    	    CLRBIT(PORTA,PinNum);
    	}else if((PinNum>=8) && (PinNum<16)){
    	    CLRBIT(PORTB,PinNum-8);
    	}else if((PinNum>=16) && (PinNum<24)){
    	    CLRBIT(PORTC,PinNum-16);
    	}else if((PinNum>=24) && (PinNum<32)){
    	    CLRBIT(PORTD,PinNum-16);
    	}

    }

}

u8 DIO_u8GetPin(u8 PinNum){

	u8 ret;

	if((PinNum>=0 && PinNum<8)){
	     ret= GETBIT(PINA,PinNum);
	}else if((PinNum>=8) && (PinNum<16)){
	     ret= GETBIT(PINB,PinNum-8);
	}else if((PinNum>=16) && (PinNum<24)){
	     ret= GETBIT(PINC,PinNum-16);
	}else if((PinNum>=24) && (PinNum<32)){
	     ret= GETBIT(PIND,PinNum-16);
	}

	return ret;

}

void DIO_voidTogglePin(u8 PinNum){

	if((PinNum>=0 && PinNum<8)){
		    TOGGLEBIT(PORTA,PinNum);
		}else if((PinNum>=8) && (PinNum<16)){
		    TOGGLEBIT(PORTB,PinNum-8);
		}else if((PinNum>=16) && (PinNum<24)){
		    TOGGLEBIT(PORTC,PinNum-16);
		}else if((PinNum>=24) && (PinNum<32)){
		    TOGGLEBIT(PORTD,PinNum-16);
		}


}






