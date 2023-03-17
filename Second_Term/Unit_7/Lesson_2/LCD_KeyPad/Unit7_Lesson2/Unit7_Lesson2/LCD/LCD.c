/*
 * LCD.c
 *
 * Created: 3/15/2023 10:46:36 AM
 *  Author: OMAR
 */ 

#include "LCD.h"
#include <avr/io.h>
#include <util/delay.h>


static void LCD_Bits (void)
{
	#if FOUR_BIT
	DDRA |= 0xF0;
	#elif EIGHT_BIT
	DDRA |= 0xFF;
	#endif
	DDRB |= (1<<RW) | (1<<RS) | (1<<ENA);
}
void LCD_Init (void)
{
	LCD_Bits ();
	
	_delay_ms (20);
	
	#if EIGHT_BIT 
	LCD_SendCommand(0x1);
	LCD_SendCommand(0x38);
	_delay_ms(1);
	LCD_SendCommand (0xE);
	_delay_ms(1);
	LCD_SendCommand (0x6);
	_delay_ms(1);
	//LCD_SendCommand(0x3C);
	//_delay_ms(1);
	#elif FOUR_BIT
	/*implementation of four bit Mode*/
	LCD_SendCommand(0x02);
	LCD_SendCommand(0x28);
	_delay_ms(1);
	LCD_SendCommand (0xE);
	_delay_ms(1);
	LCD_SendCommand (0x6);
	_delay_ms(1);
	#endif
	
}


void LCD_SendCommand (unsigned char command)
{
	#if FOUR_BIT
	LCD_CTRL = 0;
	LCD_DATA_PORT = (LCD_DATA_PORT & 0x0F) | (command & 0xF0);
	_delay_ms(1);
	LCD_CTRL |= (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &=~ (1<<ENA);
	_delay_ms(30);
	LCD_CTRL = 0;
	LCD_DATA_PORT = (LCD_DATA_PORT & 0x0F) | (command<<4);
	_delay_ms(1);
	LCD_CTRL |= (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &=~ (1<<ENA);
	#elif EIGHT_BIT
	LCD_CTRL = 0;
	LCD_DATA_PORT = command;
	_delay_ms(1);
	LCD_CTRL |= (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &=~ (1<<ENA);
	#endif
}

void LCD_SendData (unsigned char Data)
{
	#if FOUR_BIT
	LCD_CTRL &= ~ (1<<ENA);
	LCD_CTRL &= ~ (1<<RW);
	LCD_DATA_PORT = (LCD_DATA_PORT & 0x0F) | (Data & 0xF0);
	_delay_ms(1);
	LCD_CTRL |= (1<<RS);
	LCD_CTRL |= (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &=~ (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &= ~ (1<<RW);
	LCD_DATA_PORT = (LCD_DATA_PORT&0x0F) | (Data<<4);
	_delay_ms(1);
	LCD_CTRL |= (1<<RS);
	LCD_CTRL |= (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &=~ (1<<ENA);
	#elif EIGHT_BIT
	LCD_CTRL &= ~ (1<<ENA);
	LCD_CTRL &= ~ (1<<RW);
	LCD_DATA_PORT = Data;
	_delay_ms(1);
	LCD_CTRL |= (1<<RS);
	LCD_CTRL |= (1<<ENA);
	_delay_ms(30);
	LCD_CTRL &=~ (1<<ENA);
	#endif
}

void LCD_SendString (const char* Data)
{
	unsigned int i=0 , j=0, count=0;
	
	while (Data[i])
	{
		if (count<16){
			LCD_SendData (Data[i]);
			count++;
		}
		
		else
		{
			LCD_GoTO_XY(2,j);
			LCD_SendData (Data[i]);
			j++;
		}
		i++;
	}
}

void LCD_GoTO_XY (unsigned char Line , unsigned char Position)
{
	if (Line ==1)
		LCD_SendCommand(0x80 + Position);
	
	else 
	{
		LCD_SendCommand(0xC0 + Position);
	}
}