/*
 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: OMAR
 */

#include "util\delay.h"

#define F_CPU     8000000UL

#define SET_BIT(reg,bit)      reg|=(1<<bit)
#define RESET_BIT(reg,bit)    reg&=~(1<<bit)
#define TOGGLE_BIT(reg,bit)   reg^=(1<<bit)

/*GPIO*/
#define DDRD            *((unsigned volatile char*)(0x31))
#define PORTD           *((unsigned volatile char*)(0x32))
#define PIND            *((unsigned volatile char*)(0x30))

/*EXTI*/
#define MCUCR           *((unsigned volatile char*)(0x55))
#define GICR            *((unsigned volatile char*)(0x5B))
#define SREG            *((unsigned volatile char*)(0x5F))
#define GIFR			*((unsigned volatile char*)(0x5A))

void GPIOD_Init(void)
{
	RESET_BIT(DDRD,2); //PIN2 INPUT
	SET_BIT(DDRD,5);   //PIN5 OUTPUT
}

void EXTI0_Init(void)
{
	SET_BIT(SREG,7);  // Global Interrupt Enable
	MCUCR|=(0b01<<0); // Any logical change interrupt
	SET_BIT(GICR,6);  // INT0 Enable
}
int main (void)
{
	GPIOD_Init();
	EXTI0_Init();

	while (1)
	{
		RESET_BIT(PORTD,5);
	}
	return 0;
}

void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	SET_BIT(PORTD,5);
	_delay_ms(1000);
}
