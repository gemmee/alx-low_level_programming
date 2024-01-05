#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal, ended with a \n
 * @n: the number of times '\' should be printed
 * Description: If n is 0 or less, only print a \n
 *
 * Author: Gamachu AD
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
