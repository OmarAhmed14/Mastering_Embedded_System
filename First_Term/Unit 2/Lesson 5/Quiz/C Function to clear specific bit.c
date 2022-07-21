/*
 ============================================================================
 Subject     : C Function to clear specific bit
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int clear_bit (int n , int bit);

int main(void)
{
	int num,b;

  printf ("Enter input number: ");
  fflush(stdin); fflush (stdout);
  scanf ("%d",&num);

   printf ("Enter bit position: ");
   fflush(stdin); fflush (stdout);
   scanf ("%d",&b);

   printf ("Result = %d",clear_bit(num,b));


	return 0;
}


int clear_bit (int n , int bit)
{
	return n &= ~ (1 << bit);
}
