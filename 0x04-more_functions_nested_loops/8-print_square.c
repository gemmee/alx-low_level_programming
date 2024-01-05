#include "main.h"

/**
 * print_square - prints a square using a character '#', followed by a new line
 * @size: size of the square
 * Description: If size is 0 or less, print only a \n
 *
 * Author: Gamachu AD
 */
void print_square(int size)
{
	int c, r;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c < size; c++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

