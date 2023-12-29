#include "main.h"
#include <stdio.h>

#define CUT 10000000
/**
 * main - Entry point, prints the first 98 fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	long int b1, b2, f1, f2;
	int quo, count;

	b1 = 1;
	b2 = 2;
	f1 = f2 = 0;
	count = quo = 0;
	printf("%ld, %ld, ", b1, b2);
	while (count < 96)
	{
		f2 = f2 + f1;
		f1 = f2 - f1;
		b2 = b2 + b1;
		b1 = b2 - b1;
		if (b2 / CUT > 0)
		{
			quo = b2 / CUT;
			b2 = b2 % CUT;
		}
		f2 = f2 + quo;
		if (f2 > 0)
			printf("%ld%07ld", f2, b2);
		else
			printf("%ld", b2);
		quo = 0;
		if (count < 95)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
