#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting integer
 * @max: ending integer
 *
 * Return: pointer to the newly created array or NULL if min > max or if
 * malloc fails
 */
int *array_range(int min, int max)
{
	int i, num;
	int *p;

	if (min > max)
		return (NULL);
	num = max - min + 1;
	p = malloc(sizeof(*p) * num);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
		*(p + i) = min++;

	return (p);
}
