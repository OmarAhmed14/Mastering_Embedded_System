/*
 ============================================================================
 Name        : C Function to reverse digits of number
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse (int num);

int main(void)
{

	reverse(1057);

	return 0;
}

void reverse (int num)
{
	char text [50],reverse[50];int i,j;
	printf ("Intput: %d",num);
	itoa(num,text,10);

	for (i=strlen(text)-1,j=0;i>=0;i--,j++)
	{
		reverse [j]= text [i];
	}

	reverse [strlen(text)]='\0';

	printf ("\nOutput: ");
	for (i=0;i<strlen(reverse);i++)
	{
		printf ("%c",reverse[i]);
	}
}
