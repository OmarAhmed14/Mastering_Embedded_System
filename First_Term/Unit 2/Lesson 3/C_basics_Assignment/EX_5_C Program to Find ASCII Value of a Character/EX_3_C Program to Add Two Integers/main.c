/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX3:
//Write C Program to Add Two Integers
//i should see the Console as following:
//##########Console-output###
//Enter two integers: 12
//11
//Sum: 23
//###########################

#include "stdio.h"

int main ()
{
	int a,b;
	printf("Enter two integers: ");
	fflush(stdin); fflush (stdout);
	scanf ("%d %d",&a,&b);
	printf ("sum = %d", a+b);
}
