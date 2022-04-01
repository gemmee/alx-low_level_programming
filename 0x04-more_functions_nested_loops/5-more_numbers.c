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
	int j;
	int rem;
	int quo;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			rem = j % 10;
			quo = j / 10;
			if (j > 9)
			{
				_putchar(quo + '0');
			}

			_putchar(rem + '0');
		}
		_putchar('\n');
	}
}
