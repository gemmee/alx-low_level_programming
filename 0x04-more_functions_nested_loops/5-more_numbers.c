#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 *
 * Author: Gamachu AD
 */

void more_numbers(void)
{
	int row, num1, num2, col;

	row = 0;
	while (row < 10)
	{
		col = 0;
		while (col <= 14)
		{
			if (col < 10)
			{
				num2 = col;
			}
			else
			{
				num1 = col  / 10;
				num2 = col  % 10;
				_putchar (num1 + '0');
			}
			_putchar (num2 + '0');
			col++;
		}
		row++;
		_putchar ('\n');
	}
}
