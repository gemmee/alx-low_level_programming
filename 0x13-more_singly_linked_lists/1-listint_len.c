#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list listint_t
 *
 * Return: the no. of elements
 * Author: Gamachu AD
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		++i;
		h = h->next;
	}
	return (i);
}
