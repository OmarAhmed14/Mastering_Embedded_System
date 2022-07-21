/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar Ahmed
 */


// Prime Numbers between two intervals by making user defined function.


#include "stdio.h"

void Prime_Numbers (void);

int main ()
{
	Prime_Numbers();

	return 0;
}

void Prime_Numbers (void)
{
	int i, k , min_inter , max_inter,arr[20],counter,cont=0;
	printf ("Enter two numbers (intervals): ");
	fflush (stdin); fflush (stdout);
	scanf ("%d %d", &min_inter, &max_inter);

	for (i=min_inter;i<=max_inter;i++)
	{
		counter=0;

		for (k=1;k<=i;k++)
		{
			if (i%k==0)
				counter++;
		}
		if (counter == 2)
		{
			arr[cont] = i;
			cont++;

		}
	}

	printf ("prime numbers between %d and %d are: ", min_inter, max_inter);

	for (i=0;i<cont;i++)
	{
		printf ("%d  ",arr[i]);
	}


}
