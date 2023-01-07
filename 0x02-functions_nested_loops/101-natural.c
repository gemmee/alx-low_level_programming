#include <stdio.h>
#include "main.h"

/**
 * print_sum_of_multiples_35 - computes the sum of all the multiples of 3 or 5
 * below 1024(excluded), followed by a new line.
 *
 * Return: none
 */

void print_sum_of_multiples_35(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 15 == 0)
			sum += i;
		else if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("Sum = %d\n", sum);
}
/**
 * main - check the code
 *
 * Return: 0 on success
 */
int main(void)
{
	print_sum_of_multiples_35();
	return (0);
}
