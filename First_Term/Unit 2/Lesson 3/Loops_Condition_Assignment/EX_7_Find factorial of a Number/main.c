/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Omar Ahmed
 */

//EX7
//Find factorial of a Number


#include "stdio.h"

int main ()
{
	int num,i; int fact=1;
	printf ("Enter an integer number: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&num);
	if (num<0)
		printf ("Error!!! factorial of negative number doesn't exist");
	else if (num==0)
		printf ("factorial = 1");
	else
	{
		for (i=num;i>=1;i--)
			fact*=i;
		printf ("factorial = %d",fact);
	}

	return 0;
}
