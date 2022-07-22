/*
 ============================================================================
 Name        : C Function to print prime numbers between two numbers 
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void PrintPrimeNumbers (int a , int b);

int main(void)
{
	PrintPrimeNumbers(1,20);


	return 0;
}

void PrintPrimeNumbers (int min , int max)
{
	int i ,j,counter;
	printf("Input:n1=%d,n2=%d ",min,max);
	printf ("\nOutput: ");
	for (i=min;i<=max;i++)
	{
		counter=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			{
				counter++;
			}
		}
		if (counter==2)
		{
			printf (" %d ",i);
		}
	}
}
