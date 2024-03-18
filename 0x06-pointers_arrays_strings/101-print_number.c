#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Description: no use of arrays or pointers are allowed
 *              hard-coding special values is not allowed
 *              use of long is not allowed
 *              only use _putchar
 * Return: nothing
 * Author: Gamachu AD
 */
void print_number(int n)
{
	int div, num, neg, rev, rem;

	neg = 0; /*assume n is positive*/
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	if (n == 0)
		_putchar(n + '0');

	num = n;
	div = 1;
	while (num > 0)
	{
		num /= 10;
		div *= 10;
	}

	div /= 10;
	/*reverse the number*/
	rev = 0;
	num = n;
	while (num > 0)
	{
		rem = num % 10; /*get the last digit*/
		rev += rem * div;
		div /= 10;
		num /= 10;
	}

	if (neg)
		_putchar('-');

	while (rev > 0)
	{
		rem = rev % 10; /*get the last digit*/
		_putchar(rem + '0');
		rev /= 10;
	}
}
