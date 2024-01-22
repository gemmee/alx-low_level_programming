#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dll
 * @head: pointer to the head of dll
 * @n: the number to be inserted
 *
 * Return: the address of the new element
 *         NULL if it failed
 * Author: Gamachu AD
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
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
