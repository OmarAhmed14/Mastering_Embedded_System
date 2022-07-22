/*
 ============================================================================
 Name        : C Function to reverse array of string
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev (char text[]);

int main(void)
{
	char arr [100];
	rev (arr);


	return 0;
}

void rev (char text[])
{
	char a[50],b[50];int i,j;

	printf ("Enter string: ");
	fflush (stdin); fflush (stdout);
	gets (text);

	for (i=0;i<strlen(text);i++)
	{
		if (text[i]== ' ')
		{
			break;
		}
		else
		{
			a[i]=text [i];
		}
	}
	a[i]='\0';

	i++;
	for (j=0;i<strlen(text);i++,j++)
	{
		b[j]=text[i];
	}
	b[j]='\0';
	strcat (b," ");
	printf ("%s",strcat(b,a));
}
