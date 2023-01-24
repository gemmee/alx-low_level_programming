#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first node
 * @idx: the position of insertion
 * @n: the new element to be inserted
 *
 * Return: address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1, *ptr2;
	listint_t new_node;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	ptr1 = *head;
	ptr2 = *head;
	new_node->n = n;
	new_node->next = NULL;
	count = 0;
	while (*head != NULL)
	{
		*head = (*head)->next;
		count++;
	}
	if (idx >= count)
		return (NULL);
	count = 0;
	while (ptr1->next != NULL)
	{
		if (count == idx)
		{
			break;
		}
		else
		{
			ptr2 = ptr1;
			ptr1 = ptr1->next;
			count++;
		}
	}
	ptr2-next = new_node;
	new_node->next = ptr1;
	return (new_node)
}

