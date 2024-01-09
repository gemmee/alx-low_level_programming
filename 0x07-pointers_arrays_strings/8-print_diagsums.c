#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the array
 * @size: the size of the array
 *
 * Author: Gamachu AD
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumr, suml;

	j = size - 1;
	sumr = suml = 0;
	for (i = 0; i < size; i++)
	{
		sumr  += a[i * size + i];
		suml += a[i * size + j];
		j--;
	}
	printf("%d, %d\n", sumr, suml);
}
