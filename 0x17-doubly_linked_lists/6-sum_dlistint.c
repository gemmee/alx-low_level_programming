#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head of the list
 *
 * Return: the sum all elements or 0 if empty
 * Author: Jaba
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
