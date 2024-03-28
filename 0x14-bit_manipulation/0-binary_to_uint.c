#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - convert a binary number to an unsigned int
  * @b: pointer to binary string (contains '0' and '1' only)
  *
  * Return: converted decimal number or
  *			0 if b is NULL or there >= 1 invalid chars in the string b
  * Author: Gamachu AD
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, pwr;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	pwr = 1, dec = 0;
	for (; --len >= 0; pwr *= 2)
		if (b[len] == '1')
			dec += pwr;

	return (dec);
}

