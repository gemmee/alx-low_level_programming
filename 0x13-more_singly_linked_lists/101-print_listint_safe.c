#include "lists.h"

/**
 * print_listint_safe - prints a linked list including memory address
 * @head: head of linked list
 *
 * Description: Can print a list with cycle by going through the list only once
 * Return: number of nodes in the list,
 *         exit with status 98 if fails.
 * Author: Gamachu AD
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *prev;
	size_t count;

	current = head;
	if (!current)
		exit(98);
	count = 0;
	while (current)
	{
		prev = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)prev, prev->n);
		if (prev <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (count);
}
