#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a linked list of integers
 * @head: pointer to pointer to first element of list
 *
 * Author: Gamachu AD
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
;

	if (!head) /* handles the case free_listint2(NULL) */
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
