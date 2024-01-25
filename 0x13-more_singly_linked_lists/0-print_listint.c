#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 * Author: Gamachu AD
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
