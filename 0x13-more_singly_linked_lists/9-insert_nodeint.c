#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first node
 * @idx: the position of insertion
 * @n: the new element to be inserted
 *
 * Return: address of the new node
 *         or NULL if it failed.
 * Author: Gamachu AD
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pre, *temp, *node;
	unsigned int count;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	count = 0;
	temp = *head;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	/* Handle a case of inserting at an index outside the list */
	if (idx >= count)
		return (NULL);
	/* Handle a case of inserting at beginnig of the list */
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	count = 0;
	temp = *head;
	while (temp && count < idx)
	{
		pre = temp;
		temp = temp->next;
		count++;
	}
	pre->next = node;
	node->next = temp;
	return (node);
}
