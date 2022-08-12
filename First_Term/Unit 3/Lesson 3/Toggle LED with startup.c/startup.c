/*
startup.c
Eng. Omar Ahmed
*/

extern int main ();
void reset_handler ();

void Default_handler ()
{
	reset_handler();
}

void NMI_handler () __attribute__ ((weak,alias("Default_handler")));


void H_FAULT_handler ()__attribute__ ((weak,alias("Default_handler")));


#include <stdint.h> 

extern uint32_t _stack_top;

uint32_t vectors[] __attribute__((section(".vectors")))= 
{
(uint32_t) &_stack_top , (uint32_t)&reset_handler,(uint32_t)&NMI_handler,(uint32_t)&H_FAULT_handler
};
extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;



void reset_handler ()
{
	int i;
	uint32_t Data_size = (uint8_t*)&_E_data - (uint8_t*)&_S_data ;
	uint8_t *psrc = (uint8_t*)&_E_text;
	uint8_t *pdist = (uint8_t*)&_S_data;
	for (i=0;i<Data_size;i++)
	{
		*pdist = *psrc;
		pdist ++; psrc++;
	}
	uint32_t bss_size = (uint8_t*)&_E_bss - (uint8_t*)&_S_bss ;
	pdist = (uint8_t*)&_S_bss;
	for (i=0;i<bss_size;i++)
	{
		*pdist = 0;
		pdist++;
	}
	main();
}



