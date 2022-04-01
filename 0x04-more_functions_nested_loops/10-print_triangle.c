#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int gap, row, tri;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (gap = 0; gap < size - row; gap++)
			{
				_putchar(' ');
			}
			for (tri = 0; tri <= row; tri++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}


