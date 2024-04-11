#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * Author: Gamachu AD
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	hash_node_t **array = NULL; /*array of pointers*/
	unsigned long int i;

	if (!size)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;

	new = malloc(sizeof(*new));
	if (!new)
	{
		free(array);
		return (NULL);
	}

	new->size = size;
	new->array = array;

	return (new);
}
