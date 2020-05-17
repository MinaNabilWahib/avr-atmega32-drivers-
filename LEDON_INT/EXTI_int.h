/*********************************************/
/* Author  : Hussein Elmasry		         */
/* Date    : 24/2/2018				         */
/* Version : V01						     */
/*********************************************/

#ifndef _EXTI_INT_H
#define _EXTI_INT_H

/********************************************/
/* Description : Initialize EXTI mode   	*/
/********************************************/
void EXTI_voidInitialize(void);

/********************************************/
/* Description : enable EXTI 0 ISR   	    */
/********************************************/
void EXTI_voidEnableInt0(void);

/********************************************/
/* Description : disable EXTI 0 ISR   	    */
/********************************************/
void EXTI_voidDisableInt0(void);

/********************************************/
/* Description : set call back function     */
/********************************************/
void EXTI_voidSetInt0Callback(void (*copy_Callback) (void));


#endif
