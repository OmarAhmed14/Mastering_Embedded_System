/*
 * KeyPad.c
 *
 * Created: 3/15/2023 5:13:45 PM
 *  Author: OMAR
 */ 

#include "KeyPad.h"
#include <avr/io.h>
#include <util/delay.h>


const unsigned char arr [12] = { '1' , '2' , '3',
							     '4' , '5' , '6',
					             '7' , '8' , '9',
					             '*' , '0' , '#'};
								 


void KeyPad_Init (void)
{
	DDRD &=~ ((1<<R1) | (1<<R2) | (1<<R3) | (1<<R4));
	DDRD |= (1<<C1) | (1<<C2) | (1<<C3);
	KEYPAD_PORT= 0xFF;
}


unsigned char Get_PressButton (void)
{
	 signed char z; 
	int butt=-1;        
	
	for (int i=4; i<7; i++)
	{
		z=4;
		PORTD &=~ (1<<i);
		for (int j=0; j<4; j++)
		{
			if (((PIND>>j) & 1) == 0)
			{
				butt = (i-j)-z;   // 4-2 +4
				break;
			}
			z-=4;
		}
		if (butt != -1)
			break;
			
		PORTD |= (1<<i);
		_delay_ms(2);
	}
	if (butt == -1)
		return 'y';
	
	return arr [butt];
}