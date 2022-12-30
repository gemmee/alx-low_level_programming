#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - a variadic function that returns the sum of
  * all its parameters
  * @n: number of arguments to be summed
  *
  * Return: sum of all its arguments or 0 if n == 0
  * Author: Jeba
  * Date: Aug 29 2022 @KP 10B
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		unsigned int value = va_arg(ap, unsigned int);

		sum += value;
	}

	va_end(ap);
	return (sum);
}
