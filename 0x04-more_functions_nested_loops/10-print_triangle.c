#include "main.h"

/**
 * print_triangle - prints a triangle of '#', followed by a new line.
 * @size: the size of the triangle
 * Description: If size is 0 or less, print only a new line
 *
 * Author: Gamachu ADs
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');
			for (j = 0; j < i + 1; j++)
				_putchar('#');
		_putchar('\n');
		}
	}
}


