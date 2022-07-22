/*
 ============================================================================
 Name        : C Function to reverse elements in array 
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse (int a[],int size);

int main(void)
{
	 int a[5]={1,2,3,4,5};
	 printf ("Input: int a[5]={1,2,3,4,5}\n");

	 reverse (a,5);

	return 0;
}

void reverse (int a[],int size)
{
	int arr[100],i,j;
	for (i=size-1,j=0;i>=0;i--,j++)
	{
		arr[j]=a[i];
	}

	printf ("Output: ");

	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
}
