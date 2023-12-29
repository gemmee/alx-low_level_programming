#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the last digit of n
 * Author: Gamachu AD
 */
int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);
	if (ld < 0)  /* In c, -17 % 5 = -2 but in python -17 % 5 = 3 */
		ld = -1 * ld;
	_putchar(ld + '0');
	return (ld);
}

