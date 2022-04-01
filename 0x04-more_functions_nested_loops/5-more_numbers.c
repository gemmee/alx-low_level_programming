#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, 0 to 14,
 * followed by a new line
 * 
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			int r, q;

			r = j % 10;
			q = j / 10;
			if (j > 9)
			{
				_putchar(q + '0');
			}

			_putchar(r + '0');
		}
		_putchar('\n');
	}
}
