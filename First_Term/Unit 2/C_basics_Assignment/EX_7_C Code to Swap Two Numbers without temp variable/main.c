/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX7:
//Write Source Code to Swap Two Numbers without temp variable.


#include "stdio.h"

int main ()
{
	int a=25,b=15;
	a=a+b;
	b=a-b;
	a=a-b;
	printf ("After swapping a = %d\n",a);
	printf ("After swapping b = %d\n",b);
	return 0;

}
