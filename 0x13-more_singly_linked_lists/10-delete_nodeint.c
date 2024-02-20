#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to pointer to head of the list
 * @index: index of the node to be deleted, starts from 0
 *
 * Return: 1 if it succeeded,
 *         -1 if it failed.
 * Author: Gamachu AD
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre, *temp;
	unsigned int count;

	if (!head || !*head)
		return (-1);
	/* Edge case 1: delete the first node */
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	count = 0;
	temp = *head;
	while (temp && count < index)
	{
		pre = temp;
		temp = temp->next;
		count++;
	}
	/* Edge case 2: delete the last node */
	if (temp->next == NULL)
	{
		pre->next = NULL;
		free(temp);
		return (1);
	}
	/* Delete a middle node */
	if (temp->next != NULL)
	{
		pre->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
