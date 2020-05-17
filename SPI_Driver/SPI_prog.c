#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "DIO_register.h"
#include "SPI_register.h"
#include "SPI_priv.h"
#include "SPI_config.h"
#include "SPI_int.h"

void SPI_MASTER_void_init(void)
{
	SPCR=0x00;

//	/*data order*/
//	SPCR |= (DATA_ORDER<<5);
//	/*master mode*/
//	SPCR |= (SELECT_MODE<<4);
//	/*clock polarity*/
//	SPCR |= (CLOCK_POLARITY<<3);
//	/*clock phase*/
//	SPCR |= (CLOCK_PHASE<<2);
//
//	/*clock rate*/
//	SPCR |= (SPI_DOUBLE_REATE<<0);
//	SPCR |= (SPI_CLOCK_RATE<<0);
//	SPCR |= (SPI_ENABLE<<6);
	SPCR=0b01011000;
}
void SPI_MASTER_void_transmit(u8 Data)
{
	SPDR=Data;
	while(!(SPSR & (1<<7)));
	//DIO_voidSetPinValue(DIO_u8_PIN_0,DIO_u8_HIGH);
}
void SPI_SLAVE_void_init(void)
{
	/*data order*/
	SPCR |= (DATA_ORDER<<5);
	/*slave mode*/
	SPCR &= (SELECT_MODE<<4);
	/*clock polarity*/
	SPCR |= (CLOCK_POLARITY<<3);
	/*clock phase*/
	SPCR |= (CLOCK_PHASE<<2);
	/*clock rate*/
	SPSR |= (SPI_DOUBLE_REATE<<0);
	SPCR |= (SPI_CLOCK_RATE<<0);
	SPCR |= (SPI_ENABLE<<6);
}
u8 SPI_SLAVE_void_receive(void)
{
	SPDR=0;
	while(!(SPSR & (1<<7)));
	return SPDR;

}
