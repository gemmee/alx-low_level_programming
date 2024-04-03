#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array containing the integer
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * -1 if no element matches
 * -1 if size <= 0
 *
 * Author: Gamachu AD
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);
	while (array && cmp && (index < size))
	{
		if (cmp(array[index]))
			return (index);
		index++;
	}
	return (-1); /*no element matches*/
}
