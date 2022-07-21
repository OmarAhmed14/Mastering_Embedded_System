/*
 ============================================================================
 Subject     : C Function to reverse input array
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse (int size, int arr[]);

int main(void)
{
	int array[10];

	reverse (5 , array);


	return 0;
}

void reverse (int size, int arr[])
{
	int i,j,arr1[100];

	printf("Enter elements of array to be reversed: ");
	fflush (stdin) ; fflush (stdout);

	for (i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}

	for (i=size-1 , j=0 ; i>=0 ;i--,j++)
	{
		arr1[j]=arr[i];
	}

	printf ("Reversed array : ");

	for (i=0;i<size;i++)
	{
		printf("%d  ",arr1[i]);
	}
}
