#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 *                  doubly linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 * Author: Gamachu AD
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
