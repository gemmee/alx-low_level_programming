#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers using malloc, and
 *              initiate each element of the grid to 0
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the matrix(2D array).
 *         NULL if width or height is <= 0.
 *         NULL on failure.
 * Author: Gamachu AD
 */
int **alloc_grid(int width, int height)
{
	int i, j, row, col;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(height * sizeof(int *));
	/* there are height number of rows in the matrix */
	if (!p)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (!p[i])
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			p[row][col] = 0;
	return (p);
}

