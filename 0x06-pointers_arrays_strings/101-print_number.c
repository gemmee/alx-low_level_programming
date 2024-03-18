#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Author: Gamachu AD
 */
void print_number(int n)
{
	/*INT_MIN requires special handling because its */
	/*absolute value is outside the range of positive integers */
	/*i.e., it's one more than INT_MAX*/
	if (n == INT_MIN)
	{
		print_number(INT_MIN / 10);
		_putchar('0' + 8); /*last digit of is 8; INT_MIN = -2 147 483 648 */
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
