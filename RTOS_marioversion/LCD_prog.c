#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr\delay.h"

#include "DIO_int.h"

#include "LCD_config.h"
#include "LCD_priv.h"
#include "LCD_int.h"

extern void LCD_voidInitialize(void)  
//fy 7agat lazm a3melha awel masha8al el LCD (mn el datasheet [slide 13 of 25])
{
	/* wait more than 30 ms */
		_delay_ms(35);
		/* write function set command */
		LCD_voidWriteCmd(0b00111000);  // N > 2 lines  .... F >> small font

		/* wait more than 39 us */
		_delay_ms(1);

		/* write  function ON/OFF Control  */
		LCD_voidWriteCmd(0b00001100);  //display on .. cursor off

		/* wait more than 39 us  */
		_delay_ms(1);

		/* write  function clear screen command*/
		LCD_voidWriteCmd(0b00000001);

		/* wait more than 1.53 ms  */
		_delay_ms(2);

		/* write  function entry mode set*/
			// han2agelha le ba3den
	
	
}



extern void LCD_voidWriteData( u8 Copy_u8Data)
{
	/* rs = 1 */
	DIO_voidSetPinValue(LCD_u8_RS_PIN, DIO_u8_HIGH); //register select to write data 
	/*Execute the data */
	voidExecute(Copy_u8Data);
	
	
	
}

extern void LCD_voidWriteCmd( u8 Copy_u8Cmd)
{
	/* rs =0*/
	DIO_voidSetPinValue(LCD_u8_RS_PIN, DIO_u8_LOW);
	/*Execute the data */
	voidExecute(Copy_u8Cmd);

}


void LCD_voidGoToXY( u8 Copy_u8X, u8 Copy_u8Y)
{
	u8 Local_u8DdramAddress;
	if (Copy_u8Y == 0)
	{
		Local_u8DdramAddress = 0x00 + Copy_u8X;
	}
	
	else
	{
		Local_u8DdramAddress = 0x40 + Copy_u8X;
	}
	Local_u8DdramAddress |= 0x80; // set last bit
	
	LCD_voidWriteCmd(Local_u8DdramAddress); //set DDRAM address
}



static void voidExecute (u8 Copy_u8Value)  // 3mltaha private function 3shan dy moshtaraka ben el write_cmd & write_data
{
	/* rw= 0 */
	DIO_voidSetPinValue(LCD_u8_RW_PIN, DIO_u8_LOW);
	/* Data bus of LCD = copy u8 Data */
	if(GETBIT(Copy_u8Value, 0))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P0, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P0, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 1))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P1, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P1, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 2))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P2, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P2, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 3))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P3, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P3, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 4))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P4, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P4, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 5))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P5, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P5, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 6))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P6, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P6, DIO_u8_LOW);
	}
	
	if(GETBIT(Copy_u8Value, 7))
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P7, DIO_u8_HIGH);
	}
	else
	{
		DIO_voidSetPinValue(LCD_u8_DATA_P7, DIO_u8_LOW);
	}
	/* E = 1 */
	DIO_voidSetPinValue(LCD_u8_E_PIN, DIO_u8_HIGH);
	
	/* delay 1 ms */
	//_delay_ms(1);
	_delay_us(50);
	
	/*E = 0*/
		DIO_voidSetPinValue(LCD_u8_E_PIN, DIO_u8_LOW);

	/* delay 1 ms*/  /* atwal command bya5od a2al mn 1ms bekter */
	//_delay_ms(1);
		_delay_us(50);
}
