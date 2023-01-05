#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes first element of linked list
 * @head: pointer to pointer to first element
 *
 * Return: value of head node or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int removed = 0;
	listint_t *temp;

	if (*head == NULL)
		return (removed);

	temp = (*head);
	removed = temp->n;

	/*make head point to the next element*/
	*head = (*head)->next;
	free(temp);

	return (removed);
}
