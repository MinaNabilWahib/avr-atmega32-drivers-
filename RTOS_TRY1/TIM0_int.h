/******************************/
/* Author : Sameh Ali         */
/* Date	  : 6/3/2018		  */
/* Version: V01			      */
/******************************/
#ifndef _TIM0_INT_H
#define _TIM0_INT_H
#include "STD_TYPES.h"

/* Description:  */
void TIM0_voidInitialize(void);

/* Description:  */
void TIM0_voidEnableInt(void);


void TIM0_voidDisableInt(void);


void TIM0_voidSetRegister(u8 Copy_u8Value);


void TIM0_voidSetCallBack(void (*Copy_ptr) (void));

#endif
