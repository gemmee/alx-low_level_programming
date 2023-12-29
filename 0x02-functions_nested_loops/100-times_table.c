#include "main.h"

/**
 * print_times_table - prints the times table from 0 to n
 * @n: gives the dimension of the times table, must be bewteen 0 and 15
 *
 * Author: Gamachu AD
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j > 0)
					_putchar(' ');
				p = i * j;
				if (p >= 100)
				{
					_putchar('0' + p / 100);
				}
				else
				{
					if (j > 0)
						_putchar(' ');
				}
				if (p >= 10)
				{
					p = p - (p / 100) * 100;
					_putchar('0' + p / 10);
					p = p - (p / 10) * 10;
				}
				else
				{
					if (j > 0)
						_putchar(' ');
				}
				_putchar('0' + p);
				if (i <= n && j == n)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
