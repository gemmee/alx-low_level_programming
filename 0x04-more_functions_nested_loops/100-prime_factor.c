#include <stdio.h>

/**
 * main - get biggest prime factor of 612852475143
 *
 * Return: Always 0
 * Author: Gamachu AD
 */
int main(void)
{
	long int d, n;

	n = 612852475143;
	for (d = 2; d < n; d++)
	{
		if ((n % d) == 0)
			n = n / d--;
	}
	printf("%li\n", n);

	return (0);
}
