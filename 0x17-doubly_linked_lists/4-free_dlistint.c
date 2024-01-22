#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees the doubly linked list
 * @head: head of the list
 *
 * Author: Gamachu AD
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
