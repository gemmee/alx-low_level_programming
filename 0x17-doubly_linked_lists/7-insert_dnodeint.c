#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @idx: the index of insertion
 * @n: value to be inserted
 * @h: a pointer to a pointer to the head of the list
 *
 * Return: the address of the new node
 *         NULL if it failed
 * Author: Gamachu AD
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *pre;
	unsigned int count;

	if (h == NULL || *h == NULL)
		return (NULL);

	/*insertion at beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/*insertion at end*/
	count = 0;
	pre = *h;
	while (pre->next)
	{
		pre = pre->next;
		count++;
	}
	if (count <= idx)
		return (NULL);
	if (idx == count)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = n;
	pre = *h;
	count = 0;
	while (++count != idx)
		pre = pre->next;
	new->next = pre->next;
	pre->next->prev = new;
	new->prev = pre;
	pre->next = new;

	return (new);
}
