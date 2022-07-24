/*
 ============================================================================
 Subject     : C Code to add two complex numbers
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct scomplex Add (struct scomplex num1 , struct scomplex num2);

struct scomplex {
	float re;
	float im;
};

int main(void)
{
	struct scomplex number1,number2,sum;

	printf ("Enter 1st complex number\n");

	printf ("Enter real and imaginary respectively: ");
	fflush (stdin); fflush (stdout);
	scanf("%f %f",&number1.re,&number1.im);

	printf ("\nEnter 2nd complex number\n");

	printf ("Enter real and imaginary respectively: ");
	fflush (stdin); fflush (stdout);
	scanf("%f %f",&number2.re,&number2.im);

	sum = Add (number1,number2);

	printf ("sum = %.1f + %.1fi",sum.re,sum.im);

	return 0;
}

struct scomplex Add (struct scomplex num1 , struct scomplex num2)
{
	struct scomplex result;

	result.re = num1.re +num2.re ;
	result.im = num1.im + num2.im ;

	return result;
}
