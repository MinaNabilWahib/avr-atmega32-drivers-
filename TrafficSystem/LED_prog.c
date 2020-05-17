/*
 * LED_prog.c
 *
 *  Created on: Aug 16, 2019
 *      Author: minanabil
 */
#include "avr/io.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_priv.h"
#include "LED_config.h"
#include "LED_int.h"

void LED_voidInitialize(void){}

void LED_voidON(u8 LedNum){

	switch(LedNum){
	case (LED_0):
	    if(LED_0_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_0,HIGH);
	    }else if(LED_0_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_0,LOW);
	    }
	break;
	case (LED_1):
	    if(LED_1_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_1,HIGH);
	    }else if(LED_1_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_1,LOW);
	    }
	break;
	case (LED_2):
	    if(LED_2_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_2,HIGH);
	    }else if(LED_2_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_2,LOW);
	    }
	break;
	case (LED_3):
	    if(LED_3_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_3,HIGH);
	    }else if(LED_3_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_3,LOW);
	    }
	break;
	case (LED_4):
	    if(LED_4_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_4,HIGH);
	    }else if(LED_4_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_4,LOW);
	    }
	break;
	case (LED_5):
	    if(LED_5_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_5,HIGH);
	    }else if(LED_5_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_5,LOW);
	    }
	break;
	case (LED_6):
	    if(LED_6_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_6,HIGH);
	    }else if(LED_6_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_6,LOW);
	    }
	break;
	case (LED_7):
	    if(LED_7_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_7,HIGH);
	    }else if(LED_7_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_7,LOW);
	    }
	break;
	case (LED_8):
	    if(LED_8_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_8,HIGH);
	    }else if(LED_8_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_8,LOW);
	    }
	break;
	case (LED_9):
	    if(LED_9_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_9,HIGH);
	    }else if(LED_9_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_9,LOW);
	    }
	break;
	case (LED_10):
	    if(LED_10_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_10,HIGH);
	    }else if(LED_10_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_10,LOW);
	    }
	break;
	case (LED_11):
	    if(LED_11_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_11,HIGH);
	    }else if(LED_11_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_11,LOW);
	    }
	break;
	case (LED_12):
	    if(LED_12_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_12,HIGH);
	    }else if(LED_12_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_12,LOW);
	    }
	break;
	case (LED_13):
	    if(LED_13_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_13,HIGH);
	    }else if(LED_13_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_13,LOW);
	    }
	break;
	case (LED_14):
	    if(LED_14_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_14,HIGH);
	    }else if(LED_14_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_14,LOW);
	    }
	break;
	case (LED_15):
	    if(LED_15_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_15,HIGH);
	    }else if(LED_15_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_15,LOW);
	    }
	break;
	case (LED_16):
	    if(LED_16_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_16,HIGH);
	    }else if(LED_16_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_16,LOW);
	    }
	break;
	case (LED_17):
	    if(LED_17_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_17,HIGH);
	    }else if(LED_17_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_17,LOW);
	    }
	break;
	case (LED_18):
	    if(LED_18_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_18,HIGH);
	    }else if(LED_18_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_18,LOW);
	    }
	break;
	case (LED_19):
	    if(LED_19_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_19,HIGH);
	    }else if(LED_19_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_19,LOW);
	    }
	break;
	case (LED_20):
	    if(LED_20_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_20,HIGH);
	    }else if(LED_20_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_20,LOW);
	    }
	break;
	case (LED_21):
	    if(LED_21_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_21,HIGH);
	    }else if(LED_21_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_21,LOW);
	    }
	break;
	case (LED_22):
	    if(LED_22_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_22,HIGH);
	    }else if(LED_22_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_22,LOW);
	    }
	break;
	case (LED_23):
	    if(LED_23_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_23,HIGH);
	    }else if(LED_23_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_23,LOW);
	    }
	break;
	case (LED_24):
	    if(LED_24_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_24,HIGH);
	    }else if(LED_24_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_24,LOW);
	    }
	break;
	case (LED_25):
	    if(LED_25_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_25,HIGH);
	    }else if(LED_25_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_25,LOW);
	    }
	break;
	case (LED_26):
	    if(LED_26_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_26,HIGH);
	    }else if(LED_26_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_26,LOW);
	    }
	break;
	case (LED_27):
	    if(LED_27_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_27,HIGH);
	    }else if(LED_27_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_27,LOW);
	    }
	break;
	case (LED_28):
	    if(LED_28_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_28,HIGH);
	    }else if(LED_28_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_28,LOW);
	    }
	break;
	case (LED_29):
	    if(LED_29_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_29,HIGH);
	    }else if(LED_29_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_29,LOW);
	    }
	break;
	case (LED_30):
	    if(LED_30_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_30,HIGH);
	    }else if(LED_30_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_30,LOW);
	    }
	break;
	case (LED_31):
	    if(LED_31_mode==FORWARD){
	        DIO_voidSetPin(LEDPIN_31,HIGH);
	    }else if(LED_31_mode==REVERSE){
	        DIO_voidSetPin(LEDPIN_31,LOW);
	    }
	break;


	}

}

void LED_voidOff(u8 LedNum){

	switch(LedNum){

    case (LED_0):
        if(LED_0_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_0,LOW);
        }else if(LED_0_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_0,HIGH);
        }
    break;
    case (LED_1):
        if(LED_1_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_1,LOW);
        }else if(LED_1_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_1,HIGH);
        }
    break;
    case (LED_2):
        if(LED_2_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_2,LOW);
        }else if(LED_2_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_2,HIGH);
        }
    break;
    case (LED_3):
        if(LED_3_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_3,LOW);
        }else if(LED_3_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_3,HIGH);
        }
    break;
    case (LED_4):
        if(LED_4_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_4,LOW);
        }else if(LED_4_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_4,HIGH);
        }
    break;
    case (LED_5):
        if(LED_5_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_5,LOW);
        }else if(LED_5_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_5,HIGH);
        }
    break;
    case (LED_6):
        if(LED_6_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_6,LOW);
        }else if(LED_6_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_6,HIGH);
        }
    break;
    case (LED_7):
        if(LED_7_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_7,LOW);
        }else if(LED_7_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_7,HIGH);
        }
    break;
    case (LED_8):
        if(LED_8_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_8,LOW);
        }else if(LED_8_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_8,HIGH);
        }
    break;
    case (LED_9):
        if(LED_9_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_9,LOW);
        }else if(LED_9_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_9,HIGH);
        }
    break;
    case (LED_10):
        if(LED_10_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_10,LOW);
        }else if(LED_10_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_10,HIGH);
        }
    break;
    case (LED_11):
        if(LED_11_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_11,LOW);
        }else if(LED_11_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_11,HIGH);
        }
    break;
    case (LED_12):
        if(LED_12_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_12,LOW);
        }else if(LED_12_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_12,HIGH);
        }
    break;
    case (LED_13):
        if(LED_13_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_13,LOW);
        }else if(LED_13_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_13,HIGH);
        }
    break;
    case (LED_14):
        if(LED_14_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_14,LOW);
        }else if(LED_14_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_14,HIGH);
        }
    break;
    case (LED_15):
        if(LED_15_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_15,LOW);
        }else if(LED_15_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_15,HIGH);
        }
    break;
    case (LED_16):
        if(LED_16_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_16,LOW);
        }else if(LED_16_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_16,HIGH);
        }
    break;
    case (LED_17):
        if(LED_17_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_17,LOW);
        }else if(LED_17_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_17,HIGH);
        }
    break;
    case (LED_18):
        if(LED_18_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_18,LOW);
        }else if(LED_18_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_18,HIGH);
        }
    break;
    case (LED_19):
        if(LED_19_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_19,LOW);
        }else if(LED_19_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_19,HIGH);
        }
    break;
    case (LED_20):
        if(LED_20_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_20,LOW);
        }else if(LED_20_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_20,HIGH);
        }
    break;
    case (LED_21):
        if(LED_21_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_21,LOW);
        }else if(LED_21_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_21,HIGH);
        }
    break;
    case (LED_22):
        if(LED_22_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_22,LOW);
        }else if(LED_22_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_22,HIGH);
        }
    break;
    case (LED_23):
        if(LED_23_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_23,LOW);
        }else if(LED_23_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_23,HIGH);
        }
    break;
    case (LED_24):
        if(LED_24_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_24,LOW);
        }else if(LED_24_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_24,HIGH);
        }
    break;
    case (LED_25):
        if(LED_25_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_25,LOW);
        }else if(LED_25_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_25,HIGH);
        }
    break;
    case (LED_26):
        if(LED_26_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_26,LOW);
        }else if(LED_26_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_26,HIGH);
        }
    break;
    case (LED_27):
        if(LED_27_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_27,LOW);
        }else if(LED_27_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_27,HIGH);
        }
    break;
    case (LED_28):
        if(LED_28_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_28,LOW);
        }else if(LED_28_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_28,HIGH);
        }
    break;
    case (LED_29):
        if(LED_29_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_29,LOW);
        }else if(LED_29_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_29,HIGH);
        }
    break;
    case (LED_30):
        if(LED_30_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_30,LOW);
        }else if(LED_30_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_30,HIGH);
        }
    break;
    case (LED_31):
        if(LED_31_mode==FORWARD){
            DIO_voidSetPin(LEDPIN_31,LOW);
        }else if(LED_31_mode==REVERSE){
            DIO_voidSetPin(LEDPIN_31,HIGH);
        }
    break;

	}


}

void LED_voidToggle(u8 LedNum){

	switch(LedNum){

        	case (LED_0):
        		DIO_voidTogglePin(LEDPIN_0);
        	break;
        	case (LED_1):
        		DIO_voidTogglePin(LEDPIN_1);
        	break;
        	case (LED_2):
        		DIO_voidTogglePin(LEDPIN_2);
        	break;
        	case (LED_3):
        		DIO_voidTogglePin(LEDPIN_3);
        	break;
        	case (LED_4):
        		DIO_voidTogglePin(LEDPIN_4);
        	break;
        	case (LED_5):
        		DIO_voidTogglePin(LEDPIN_5);
        	break;
        	case (LED_6):
        		DIO_voidTogglePin(LEDPIN_6);
        	break;
        	case (LED_7):
        		DIO_voidTogglePin(LEDPIN_7);
        	break;
        	case (LED_8):
        		DIO_voidTogglePin(LEDPIN_8);
        	break;
        	case (LED_9):
        		DIO_voidTogglePin(LEDPIN_9);
        	break;
        	case (LED_10):
        		DIO_voidTogglePin(LEDPIN_10);
        	break;
        	case (LED_11):
        		DIO_voidTogglePin(LEDPIN_11);
        	break;
        	case (LED_12):
        		DIO_voidTogglePin(LEDPIN_12);
        	break;
        	case (LED_13):
        		DIO_voidTogglePin(LEDPIN_13);
        	break;
        	case (LED_14):
        		DIO_voidTogglePin(LEDPIN_14);
        	break;
        	case (LED_15):
        		DIO_voidTogglePin(LEDPIN_15);
        	break;
        	case (LED_16):
        		DIO_voidTogglePin(LEDPIN_16);
        	break;
        	case (LED_17):
        		DIO_voidTogglePin(LEDPIN_17);
        	break;
        	case (LED_18):
        		DIO_voidTogglePin(LEDPIN_18);
        	break;
        	case (LED_19):
        		DIO_voidTogglePin(LEDPIN_19);
        	break;
        	case (LED_20):
        		DIO_voidTogglePin(LEDPIN_20);
        	break;
        	case (LED_21):
        		DIO_voidTogglePin(LEDPIN_21);
        	break;
        	case (LED_22):
        		DIO_voidTogglePin(LEDPIN_22);
        	break;
        	case (LED_23):
        		DIO_voidTogglePin(LEDPIN_23);
        	break;
        	case (LED_24):
        		DIO_voidTogglePin(LEDPIN_24);
        	break;
        	case (LED_25):
        		DIO_voidTogglePin(LEDPIN_25);
        	break;
        	case (LED_26):
        		DIO_voidTogglePin(LEDPIN_26);
        	break;
        	case (LED_27):
        		DIO_voidTogglePin(LEDPIN_27);
        	break;
        	case (LED_28):
        		DIO_voidTogglePin(LEDPIN_28);
        	break;
        	case (LED_29):
        		DIO_voidTogglePin(LEDPIN_29);
        	break;
        	case (LED_30):
        		DIO_voidTogglePin(LEDPIN_30);
        	break;
        	case (LED_31):
        		DIO_voidTogglePin(LEDPIN_31);
        	break;

	}


}


