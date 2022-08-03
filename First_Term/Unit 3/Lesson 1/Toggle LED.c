/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Omar Ahmed
 * @brief          : Toggle LED connected in pin 13 Port A
 ******************************************************************************
*/

#include "stdint.h"

#define RCC_BASE     0x40021000
#define GPIO_PA_BASE 0x40010800
#define RCC_APB2ENA  *(volatile int32_t*)(RCC_BASE+0x18)
#define GPIO_PA_CRH  *(volatile int32_t*)(GPIO_PA_BASE+0x04)
#define GPIO_PA_ODR  *(volatile int32_t*)(GPIO_PA_BASE+0x0C)


int main ()
{
	RCC_APB2ENA |= 0x04;
	GPIO_PA_CRH &= 0xff0fffff;
	GPIO_PA_CRH |= 0x00200000;

	while (1)
	{
		GPIO_PA_ODR |= (1<<13);
		for (int i=0;i<5000;i++);
		GPIO_PA_ODR &= ~ (1<<13);
		for (int i=0;i<=5000;i++);

	}
	return 0;
}
