/*
 * main.c
 *
 * Created: 3/14/2023 5:02:10 PM
 *  Author: OMAR
 */ 

#define F_CPU          8000000U

/**********LEDS, BUTTON and BUZZER************/
#define PORTD   *((unsigned char*)(0x32))
#define PIND    *((unsigned char*)(0x30))
#define DDRD    *((unsigned char*)(0x31))
/*************************************************/



void GPIO_Init (void)
{
	/*LEDS OUTPUT*/
	DDRD= (DDRD & 0x1F)|0xE0;
	
	/*PD0 (BUTTON) >> FLOATING INPUT*/
	DDRD &=~ (1<<0);
	
	/*PD4 (BUZZER) >> OUTPUT*/
	DDRD |= (1<<4);
	
}

int main(void)
{
	unsigned char LED=5, flag=1,F=1;
	
	GPIO_Init();
	
    while(1)
    {
        if ((PIND &1)==1)
		{
			if (LED <=7 && F == 1)
				flag=0;
			else
				flag =1;
				
			switch (flag){
			case 0:
				PORTD ^= (1<<LED);
				F=1;
				LED++;
				break;
			
			case 1:
				LED--;
				F=0;
				PORTD ^= (1<<LED);
				if (LED==5)
					F=1;
				break;
			}
			
			PORTD |= (1<<4);
					
			while ((PIND &1)==1);
		}
		
		else
			PORTD &=~ (1<<4);	
		
    }
}