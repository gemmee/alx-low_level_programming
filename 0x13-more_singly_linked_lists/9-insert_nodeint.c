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
	listint_t *temp, *node;
	unsigned int count;

	temp = *head;
	count = 0;
	/* Move temp just before point of insertion */
	while (temp && count < idx - 1)
	{
		count++;
		temp = temp->next;
	}
	/* Allocate memory for the node to inserted */
	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		/* Handle a case of inserting at beginning of the list */
		if (idx == 0)
		{
			node->next = *head;
			*head = node;
			return (node);
		}
		if (idx == count + 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
	}
	free(node);
	return (NULL);
}
