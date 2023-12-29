#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * prints the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Desc: the numbers must be separated by comma, followed by a space
 * and newline at the end
 * Author: Gamachu AD
 */

int main(void)
{
	long int a, b, count;

	a = 1;
	b = 2;
	printf("%ld, ", a);
	for (count = 0; count < 48; count++)
	{
		printf("%ld, ", b);
		b = b + a;
		a = b - a;
	}
	printf("%ld\n", b);
	return (0);
}
