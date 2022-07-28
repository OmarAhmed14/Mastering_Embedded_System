/*
 ============================================================================
 Subject     : C Code to reverse Elements of array using pointers
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr [15]; int i; int size;

	printf ("Enter size of the array: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&size);

	printf ("\nEnter Elements the array\n");

	for (i=0;i<size;i++)
	{
		printf ("Enter Element %d: ",i+1);
		fflush (stdin); fflush (stdout);
		scanf ("%d",&arr[i]);
	}

	int*ptr = &arr[size-1];

	printf ("\nReverse Array\n");

	for (i=size-1;i>=0;i--)
	{
		printf ("Element %d: %d\n",i+1,*ptr--);
	}


	return 0;
}
