/****************************************/
/* Author  : Hussein Elmasry		    */
/* Date    : 24/2/2018					*/
/* Version : V01						*/
/****************************************/

#ifndef _EXTI_PRIV_H
#define _EXTI_PRIV_H

/********************************************/
/* Description : operation modes         	*/
/********************************************/

#define EXTI_u8_LOW_MODE	            0
#define EXTI_u8_IOC_MODE	            1
#define EXTI_u8_FAL_MODE	            2
#define EXTI_u8_RIS_MODE	            3



/********************************************/
/* Description : Enable/Disable state   	*/
/********************************************/
#define EXTI_u8_ENABLE_STATE	            1
#define EXTI_u8_DISABLE_STATE	            0

/********************************************/
/* Description : mode clear mask   	        */
/********************************************/
#define EXTI_u8_INT0_MODE_CLEAR	             0b11111100


/********************************************/
/* Description : PIE bit index   	        */
/********************************************/
#define EXTI_u8_INT0_PIE	                 6


/********************************************/
/* Description : PIF bit index   	        */
/********************************************/
#define EXTI_u8_INT0_PIF	                 6

#endif
