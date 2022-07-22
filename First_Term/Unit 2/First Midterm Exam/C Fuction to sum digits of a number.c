/*
 ============================================================================
 Name        : C Fuction to sum digits of a number
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sum_digits (int num);


int main(void)
{
	Sum_digits (4565);


	return 0;
}

int Sum_digits (int num)
{
	int i,sum=0;
	printf ("Input: %d",num);

	for (i=0;num;i++)
	{
		sum += num%10;
		num /= 10;
	}

	printf ("\nOutput= %d",sum);

	return sum;

}
