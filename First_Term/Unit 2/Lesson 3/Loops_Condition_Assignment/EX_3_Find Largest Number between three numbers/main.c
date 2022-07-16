/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX3
//Find Largest Number between three numbers


#include "stdio.h"

int main ()
{
	float a,b,c;
	printf ("Enter three numbers: ");
	fflush (stdin); fflush (stdout);
	scanf ("%f %f %f", &a,&b,&c);
	if (a>b)
	{
		if (a>c)
			printf ("largest number = %.2f",a);
	}
	else if (b>a)
	{
		if (b>c)
			printf ("largest number = %.2f",b);
	}
	else
		printf ("largest number = %.2f",c);
	return 0;
}


