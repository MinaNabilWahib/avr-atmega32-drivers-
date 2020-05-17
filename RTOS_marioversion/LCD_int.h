/* Author: Mario Ramzy		*/
/* Date : 6-2-2018 			*/
/* Version: V01				*/
/*************************************/


#ifndef _LCD_INT_H
#define _LCD_INT_H


extern void LCD_voidInitialize(void);

void LCD_voidWriteData( u8 Copy_u8Data);

void LCD_voidWriteCmd( u8 Copy_u8Cmd);

void LCD_voidGoToXY( u8 Copy_u8X, u8 Copy_u8Y);


#endif

