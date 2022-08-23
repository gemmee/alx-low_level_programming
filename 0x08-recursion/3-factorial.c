#include "main.h"

/**
 * factorial - computes the factorial of a given number using recursion
 * @n: the number whose factorial is computed
 *
 * Return: the factorial of n
 * author: Jaba
 * date: Aug 23. 2022. kp7c
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

