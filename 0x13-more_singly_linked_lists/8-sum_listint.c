#include "lists.h"

/**
 * sum_listint - finds the sum of all values in list
 * @head: pointer to head of list
 *
 * Return: the sum or 0 if the list is empty
 * Author: Gamachu AD
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
