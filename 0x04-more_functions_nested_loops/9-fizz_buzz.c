#include "stdio.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line, except for
 * for multiples 3, print Fizz
 * for multiples 5, print Buzz
 * for multiples of 3 and 5,  print FizzBuzz
 *
 * Return: Always 0 (Success)
 * Author: Gamachu AD
 */
int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	if (n == 100)
		printf("Buzz\n");
	return (0);
}


