#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 *                initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array
 *         or NULL if it fails or if size = 0
 * Author: Gamachu AD
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	/* check if malloc was succussful */
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
