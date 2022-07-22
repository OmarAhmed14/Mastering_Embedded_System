/*
 ============================================================================
 Name        : C function to print sum from 1 to 100 without loop
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int s,i;
void sum ();

int main(void)
{
 sum();

	return 0;
}

void sum ()
{
	if (i<=100)
	{
		s+=i;
		i++;
		sum();
	}
	else
	{
		printf("sum = %d",s);
	}
}
