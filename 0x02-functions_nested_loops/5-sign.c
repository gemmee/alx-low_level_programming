#include "main.h"

/**
 * print_sign - prints the sign of a number i.e., + if positive, - if negative,
 *            and 0 if the number is zero
 * @n: input number
 *
 * Return: 1 if n is positive,
 *         0 if n is zero,
 *        -1 if n is negative
 * Author: Gamachu
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else
	{
		_putchar('-');
		sign = -1;
	}
	return (sign);
}
