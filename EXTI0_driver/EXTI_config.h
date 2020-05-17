/****************************************/
/* Author  : Hussein Elmasry		    */
/* Date    : 24/2/2018					*/
/* Version : V01						*/
/****************************************/

#ifndef _EXTI_CONFIG_H
#define _EXTI_CONFIG_H

/********************************************/
/* Description : Initialize EXTI mode   	*/
/* Range       : EXTI_u8_LOW_MODE      0
                 EXTI_u8_IOC_MODE	   1
                 EXTI_u8_FAL_MODE	   2
                 EXTI_u8_RIS_MODE      3    */
/********************************************/
#define EXTI_u8_INT0_MODE    EXTI_u8_RIS_MODE

/********************************************/
/* Description : External interrupt 0 state */
/* Range       : EXTI_u8_ENABLE_STATE  1
                 EXTI_u8_DISABLE_STATE 0    */
/********************************************/
#define EXTI_u8_INT0_INIT_STATE       EXTI_u8_DISABLE_STATE





#endif
