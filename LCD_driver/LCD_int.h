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

#define CLR_DISPLAY 					(0x01)
#define LCD_FUNCTION_SET_4BIT  			(0x28)
#define LCD_DISP_ON_CURSE_OFF_BLINK_OFF (0x0c)
#define LCD_ENTRY_MODE 					(0x06)
#define LCD_BEGIN_AT_FIRST_ROW			(0x80)

#define RETURN_HOME 					(0x02)
//#define FUNCTION_SET 0b00101000

void LCD_voidWriteString(u8 *x);
////to do ..
//void LCD_voidPrintf(...);




#endif /* LCD_INT_H_ */
