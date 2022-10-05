#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: none
 * Author: Jaba
 * Date: Oct 05, 2022 at 21 room kiit
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
