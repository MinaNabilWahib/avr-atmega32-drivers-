/*
 * main.c
 *
 *  Created on: Aug 3, 2019
 *      Author: Mina Nabil
 */
#include "avr/io.h"
#include "avr/delay.h"
//#include "BIT_MATH.h"

int main(){
	DDRA=0xff;
	//CLRBIT(DDRC,0);
	while(1){
		/*if (GETBIT(PINC,0)==1){
			PORTA=0xff;
		}else{
			PORTA=0x00;
		}*/
		PORTA=0xff;
		_delay_ms(100);
		PORTA=0x00;
		_delay_ms(100);

		}
	return 0;
}



