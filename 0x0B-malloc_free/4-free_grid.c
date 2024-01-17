#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created in alloc_grid.
 * @grid: pointer to the 2D array(grid)
 * @height: height of grid i.e rows of matrix
 *
 * Return: void.
 * Author: Gamachu AD
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

