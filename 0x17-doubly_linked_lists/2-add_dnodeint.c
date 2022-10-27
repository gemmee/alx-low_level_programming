#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dll
 * @head: pointer to the head of dll
 * @n: the number to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 * Author: Jaba
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
