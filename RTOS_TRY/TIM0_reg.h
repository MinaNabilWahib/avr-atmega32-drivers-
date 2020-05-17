/******************************/
/* Author : Sameh Ali         */
/* Date	  : 6/3/2018		  */
/* Version: V01			      */
/******************************/
#ifndef _TIM0_REG_H
#define _TIM0_REG_H

#define TIMSK	*((volatile u8*)0x59)
#define TIFR	*((volatile u8*)0x58)
#define TCCR0	*((volatile u8*)0x53)
#define TCNT0	*((volatile u8*)0x52)

#endif