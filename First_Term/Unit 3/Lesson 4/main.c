# define SYSCTL_R     (*((volatile unsigned long *) 0x400fe108))
# define GPIOF_DIR_R  (*((volatile unsigned long *) 0x40025400))
# define GPIOF_DEN_R  (*((volatile unsigned long *) 0x4002551c))
# define GPIOF_DATA_R (*((volatile unsigned long *) 0x400253fc))


int main ()
{
	int delay_counter;
	SYSCTL_R |= 0x20;
	// delay untill saturation
	for (delay_counter=0;delay_counter<100;delay_counter++);
	GPIOF_DIR_R |= 1<<3 ;
	GPIOF_DEN_R |= 1<<3 ;

	while (1)
	{
		GPIOF_DATA_R |= 1<<3 ;
		for (delay_counter=0;delay_counter<100000;delay_counter++);
		GPIOF_DATA_R &= ~(1<<3) ;
		for (delay_counter=0;delay_counter<100000;delay_counter++);
	}
	return 0;
}

