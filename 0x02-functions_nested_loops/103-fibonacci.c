#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Prints the sum of all even-valued fibonacci terms that starts with 1 and 2,
 * whose values do not exceed 4 million.
 * followed by a new line
 *
 * Return: none
 */

int main(void)
{
	long int a, b, sum;

	sum = 0;
	a = 1;
	b = 2;
	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		b = a + b;
		a = b - a;
	}
	printf("%ld\n", sum);
	return (0);
}
