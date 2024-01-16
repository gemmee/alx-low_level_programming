#include "main.h"
int findSqrt(int num, int sqrt);

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: number whose square root is computed
 * Hint: man sqrt
 *
 * Return: the value of natural square root of n
 *         -1 if n does not have a natural sqrt
 * Author: Gamachu AD
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (findSqrt(n, 0));
}

/**
 * findSqrt - checks if sqrt of number exists and returns it
 * @num: number
 * @sqrt: possible square root of the number
 *
 * Return: square root of the number for nums like 0, 1, 4, 9, 16, ...
 *         -1 for nums like 2, 3, 5, ...
 */
int findSqrt(int num, int sqrt)
{
	if (sqrt * sqrt == num)
		return (sqrt);
	else if (sqrt * sqrt > num)
		return (-1);
	else
		return (findSqrt(num, sqrt + 1));
}

