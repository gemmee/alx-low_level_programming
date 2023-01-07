#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Prints the first 98 fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int a, b, count;

	a = 1;
	b = 2;
	count = 0;
	printf("%lu, ", a);
	while (count < 96)
	{
		printf("%lu, ", b);
		b = b + a;
		a = b - a;
		count++;
	}
	printf("%lu\n", b);
	return (0);
}
