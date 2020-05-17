/*****************************
Author : Mario Ramzy
Date : 13/4/2018
Version: V01
*******************/

#ifndef _ADC_REG_H
#define _ADC_REG_H


#define ADMUX   	*((volatile u8*)0x27)
#define ADCSRA		*((volatile u8*)0x26)
#define ADCH		*((volatile u8*)0x25
#define ADCL		*((volatile u8*)0x24)
#define ADCDATA 	*((volatile u16*)0x24)
#define SFIOR		*((volatile u8*)0x50)



#endif
