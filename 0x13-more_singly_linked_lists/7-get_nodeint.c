#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or
 *         NULL if the node doesn't exist
 * Author: Gamachu AD
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;
	listint_t *temp;

	if (!head) /* edge case of empty list */
		return (NULL);
	len = 0;
	temp = head;
	while (temp) /* find length of the list */
	{
		len++;
		temp = temp->next;
	}
	if (index >= len) /* edge case of invalid index */
		return (NULL);
	len = 0;
	while (head && len <= index)
	{
		temp = head;
		head = head->next;
		len++;
	}
	return (temp);
}
