/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX6
//Write Source Code to Swap Two Numbers
//#########Console_output######
//Enter value of a: 1.20
//Enter value of b: 2.45
//After swapping, value of a = 2.45
//After swapping, value of b = 1.2
//#############################

#include "stdio.h"

int main()
{
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush (stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush (stdout);
	scanf("%f",&b);
	temp=a;a=b;b=temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);
	return 0;
}
