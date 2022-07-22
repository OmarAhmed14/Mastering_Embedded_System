/*
 ============================================================================
 Name        : C Function to find unique number in array
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Unique (int arr[],int size);

int main(void)
{
	printf ("Input:int a[3]={4,2,4} \n");
	int a[3]={4,2,4}; ;
	Unique (a,3);

	return 0;
}

void Unique (int arr[],int size)
{
	int i,j,un=0;
	for (i=0;i<size;i++)
	{
		un=0;
		for (j=0;j<size;j++)
		{
			if (arr[i]==arr[j] && i!=j)
			{
				un =1;
			}
		}
		if (un==0)
		printf ("Output: %d ",arr[i]);
	}
}
