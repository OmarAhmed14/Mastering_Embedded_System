/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Omar Ahmed
 */

//EX6
//calculate sum of natural numbers


#include "stdio.h"

int main ()
{
	int sum=0,num,i;
	printf ("Enter an integer: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&num);
	for (i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf ("sum = %d",sum);
	return 0;
}
