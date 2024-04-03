#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to a function to be executed on array
 *
 * Return: Nothing
 * Author: Gamachu AD
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size-- && array && action)
		action(*(array++));
}
