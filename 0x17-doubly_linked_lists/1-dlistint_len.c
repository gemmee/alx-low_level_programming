#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements
 * Author: Gamachu AD
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
