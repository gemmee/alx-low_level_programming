#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: the index of the node to be returned
 *
 * Return: the nth node or NULL if link does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	count = 0;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	if (count <= index)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		while (current != NULL)
		{
			if (count == index)
			{
				break;
			}
			else
			{
				count++;
				current = current->next;
			}
		}
		return (current);
	}
}
