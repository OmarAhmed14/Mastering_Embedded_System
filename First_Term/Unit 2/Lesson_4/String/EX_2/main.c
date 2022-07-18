/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */


// Program to compute length of string


#include "stdio.h"

int main()
{
	char text [50];
	int i=0;int len=0;
	printf("Enter a string: ");
	fflush (stdin);fflush (stdout);
	gets (text);

	while(text[i]!=0)
	{
		len++;
		i++;
	}
	printf ("Length of String = %d",len);
}
