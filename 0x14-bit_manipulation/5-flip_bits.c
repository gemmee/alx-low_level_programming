#include "main.h"
#include <stdio.h>

/**
  * flip_bits - flip bits to convert one number to another number.
  * @n: first number.
  * @m: second number to convert to.
  *
  * Return: number of bits that was needed to flip.
  * Author: Jaba
  * Date: Sep 01 2022 @kP 10b
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

