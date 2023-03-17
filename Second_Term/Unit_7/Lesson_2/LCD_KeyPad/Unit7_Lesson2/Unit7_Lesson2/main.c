/*
 * main.c
 *
 * Created: 3/15/2023 10:41:48 AM
 *  Author: OMAR
 */ 

#include <avr/io.h>
#include "LCD/LCD.h"
#include "KeyPad/KeyPad.h"
#include <util/delay.h>


int main(void)
{
	LCD_Init();
	KeyPad_Init ();

    while(1)
    {
		unsigned char x =Get_PressButton();
		
		if (x!= 'y'){
			LCD_SendData(x);
			_delay_ms(300);
		}
    }
}