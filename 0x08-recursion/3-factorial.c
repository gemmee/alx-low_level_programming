#include "main.h"

/**
 * factorial - computes the factorial of a given number using recursion
 * @n: the number whose factorial is computed
 * Hint: Factorial of 0 is 1
 *
 * Return: the factorial of n
 *         -1 if n is negative
 * Author: Gamachu AD
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

