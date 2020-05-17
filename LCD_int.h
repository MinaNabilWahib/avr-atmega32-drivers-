/*
 * LCD_int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: MAGO
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_
void LCD_voidInitialize();
void LCD_voidWriteChar(u8 Data);
void LCD_voidWriteCmd(u8 Cmd);
void LCD_ClrScreen();
void LCD_voidGoTo(u8 x, u8 y);
void LCD_voidWriteString(u8 *x);

#define CLR_DISP 1
#define RETURN_HOME 2
#endif /* LCD_INT_H_ */
