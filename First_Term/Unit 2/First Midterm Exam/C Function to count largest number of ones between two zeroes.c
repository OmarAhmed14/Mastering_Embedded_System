/*
 ============================================================================
 Name        : C Function to count largest number of ones between two zeroes
 Author      : Omar Ahmed
 ==============================
 */

#include <stdio.h>
#include <stdlib.h>


int OnesCounter (int number);


int main ()
{
	int number;

	printf("Enter an integer number in decimal format: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	printf("\nThe entered number is: %d, and maximum number of One-digits is %d.", number, OnesCounter(number));

	return 0;
}


int OnesCounter (int number)
{
	int newNumber, counter=0, numOfIntegerBits = 31, numberOfOnes=0;

	for (; numOfIntegerBits >= 0; numOfIntegerBits--)
	{
		newNumber = number >> numOfIntegerBits;

		if (newNumber & 1)
		{
			counter++;
		}
		else
		{
			if(counter>numberOfOnes)
			{
				numberOfOnes = counter ;
				counter = 0;
			}
			else
			{
				counter=0;
			}
		}
	}
	return numberOfOnes;

}
