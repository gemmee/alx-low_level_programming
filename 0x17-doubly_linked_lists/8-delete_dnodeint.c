#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 * Author: Gamachu AD
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *del;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	temp = *head;

	if (index == 0) /* Delete first node */
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL) /* If index is out of range */
		return (-1);

	del = temp->next;
	temp->next = del->next;
	if (temp->next != NULL)
		temp->next->prev = temp;
	free(del);
	return (1);
}

