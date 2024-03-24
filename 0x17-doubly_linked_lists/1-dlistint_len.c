#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 * Author: Gamachu AD
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
