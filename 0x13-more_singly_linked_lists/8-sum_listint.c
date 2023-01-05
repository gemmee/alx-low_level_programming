#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to the head node
 *
 * Return: the sum or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (head == NULL)
		return (sum);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
