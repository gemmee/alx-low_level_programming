#include "main.h"
int findSqrt(int num, int sqrt);

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: number whose square root is computed
 *
 * Return: the value of natural square root of n
 * author: Jaba [not my own code]
 * date: Aug 23. 2022. kp7c
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (findSqrt(n, 0));
}

/**
 * findSqrt - checks if sqrt of number exists
 * @num: number
 * @sqrt: possible square root of the number
 *
 * Return: square root of the number on success or -1 on error
 */
int findSqrt(int num, int sqrt)
{
	if (sqrt * sqrt == num)
	{
		return (sqrt);
	}
	else
	{
		if (sqrt * sqrt > num)
			return (-1);
		else
			return (findSqrt(num, sqrt + 1));
	}
}

