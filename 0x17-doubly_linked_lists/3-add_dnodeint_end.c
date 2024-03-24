#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: pointer to the head of the list
 * @n: the element to added
 *
 * Return: the address of the new element
 *         NULL if it failed
 * Author: Gamachu AD
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *ptr;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	ptr = *head;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	newnode->prev = ptr;
	return (newnode);
}
