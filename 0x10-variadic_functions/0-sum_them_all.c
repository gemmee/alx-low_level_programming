#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - a variadic function that returns the sum of all its parameters
  * @n: first argument
  *
  * Return: sum of all its arguments
  * Author: Jaba
  * Date: Aug 29 2022 @KP 10B
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(ap, unsigned int);
		sum += value;
	}

	va_end(ap);
	return (sum);
}

