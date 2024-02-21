#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to the first node
 *
 * Return: pointer to the first node of the reversed list
 * Author: Gamachu AD
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
