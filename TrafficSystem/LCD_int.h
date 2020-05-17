/*
 * LCD_int.h
 *
 *  Created on: Aug 24, 2019
 *      Author: minanabil
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_

void LCD_voidInitialize(void);
void LCD_voidWriteData(u8 Data);
void LCD_voidWriteCmd(u8 Cmd);
void LCD_voidClrScreen(void);

void LCD_voidGoToXY(u8 x,u8 y);

#define CLR_DISPLAY 1
#define RETURN_HOME 2
//#define FUNCTION_SET 0b00101000

////to do ..
//void LCD_voidWriteString(u8 *x);
//void LCD_voidPrintf(...);




#endif /* LCD_INT_H_ */
