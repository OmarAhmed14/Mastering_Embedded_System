/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */


// C Program to reverse string without using Library Function


#include "stdio.h"
#include "string.h"

int main ()
{
	char text [10];
	char rev[10];
	int i; int j=0;

	printf ("Enter a string: ");
	fflush (stdin); fflush (stdout);
	gets(text);

	for (i=strlen(text);i>0;i--)
	{
        rev [j]=text[i-1];
        j++;
	}
	printf ("Reverse String is: %s",rev);
}
