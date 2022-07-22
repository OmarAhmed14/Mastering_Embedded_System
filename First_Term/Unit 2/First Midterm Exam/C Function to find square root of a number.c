/*
 ============================================================================
 Name        : C Function to find square root of a number
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sqrRoot (int num);

int main(void)
{

	printf ("\nOutput: %.3f",sqrRoot (10));

	return 0;
}

float sqrRoot (int num)
{
	printf ("Input: %d",num);

	return sqrt (num);

}
