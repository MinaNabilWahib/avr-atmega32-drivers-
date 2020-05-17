/*
 * SWITCH_prog.c
 *
 *  Created on: Aug 21, 2019
 *      Author: minanabil
 */
#include "avr/io.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "SWITCH_priv.h"
#include "SWITCH_config.h"
#include "SWITCH_int.h"


void SWITCH_voidInitialize(void){

}

u8 SWITCH_u8State(u8 SwitchNum){
	u8 ret;

	switch(SwitchNum){

	case (SWITCH_0):
		if(SWITCH_0_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_0)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_0)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_0_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_0)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_0)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_1):
		if(SWITCH_1_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_1)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_1)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_1_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_1)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_1)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_2):
		if(SWITCH_2_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_2)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_2)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_2_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_2)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_2)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_3):
		if(SWITCH_3_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_3)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_3)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_3_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_3)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_3)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_4):
		if(SWITCH_4_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_4)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_4)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_4_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_4)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_4)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_5):
		if(SWITCH_5_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_5)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_5)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_5_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_5)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_5)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_6):
		if(SWITCH_6_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_6)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_6)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_6_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_6)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_6)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_7):
		if(SWITCH_7_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_7)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_7)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_7_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_7)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_7)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_8):
		if(SWITCH_8_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_8)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_8)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_8_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_8)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_8)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_9):
		if(SWITCH_9_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_9)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_9)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_9_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_9)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_9)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_10):
		if(SWITCH_10_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_10)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_10)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_10_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_10)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_10)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_11):
		if(SWITCH_11_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_11)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_11)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_11_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_11)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_11)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_12):
		if(SWITCH_12_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_12)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_12)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_12_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_12)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_12)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_13):
		if(SWITCH_13_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_13)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_13)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_13_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_13)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_13)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_14):
		if(SWITCH_14_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_14)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_14)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_14_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_14)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_14)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_15):
		if(SWITCH_15_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_15)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_15)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_15_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_15)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_15)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_16):
		if(SWITCH_16_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_16)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_16)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_16_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_16)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_16)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_17):
		if(SWITCH_17_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_17)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_17)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_17_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_17)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_17)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_18):
		if(SWITCH_18_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_18)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_18)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_18_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_18)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_18)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_19):
		if(SWITCH_19_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_19)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_19)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_19_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_19)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_19)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_20):
		if(SWITCH_20_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_20)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_20)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_20_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_20)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_20)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_21):
		if(SWITCH_21_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_21)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_21)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_21_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_21)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_21)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_22):
		if(SWITCH_22_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_22)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_22)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_22_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_22)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_22)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_23):
		if(SWITCH_23_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_23)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_23)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_23_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_23)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_23)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_24):
		if(SWITCH_24_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_24)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_24)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_24_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_24)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_24)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_25):
		if(SWITCH_25_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_25)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_25)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_25_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_25)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_25)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_26):
		if(SWITCH_26_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_26)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_26)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_26_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_26)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_26)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_27):
		if(SWITCH_27_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_27)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_27)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_27_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_27)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_27)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_28):
		if(SWITCH_28_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_28)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_28)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_28_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_28)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_28)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_29):
		if(SWITCH_29_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_29)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_29)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_29_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_29)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_29)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_30):
		if(SWITCH_30_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_30)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_30)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_30_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_30)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_30)==LOW){
				ret=ON;
			}
		}
	break;
	case (SWITCH_31):
		if(SWITCH_31_mode==PULLDOWN){
			if(DIO_u8GetPin(SWITCHPIN_31)==HIGH){
				ret=ON;
			}else if(DIO_u8GetPin(SWITCHPIN_31)==LOW){
				ret=OFF;
			}
		}else if(SWITCH_31_mode==PULLUP){
			if(DIO_u8GetPin(SWITCHPIN_31)==HIGH){
				ret=OFF;
			}else if(DIO_u8GetPin(SWITCHPIN_31)==LOW){
				ret=ON;
			}
		}
	break;


	}

	return ret;
}


