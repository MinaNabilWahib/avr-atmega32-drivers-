/*****************************
Author : Mario Ramzy
Date : 13/4/2018
Version: V01
*******************/


#ifndef _ADC_INT_H
#define _ADC_INT_H


#include "STD_TYPES.h"
#include "ADC_priv.h"
#include "ADC_config.h"



void ADC_voidInitialize(void);
void ADC_voidEnable(void);
void ADC_voidDisable(void);
void ADC_voidStartConv (void);
void ADC_voidIntEnable(void);
void ADC_voidIntDisable(void);
void ADC_voidSetCallBack(void (*Copy_ptr) (void));
u8 ADC_u8GetResult(u8 channel);
u16 ADC_u16GetResult(void);




#endif

