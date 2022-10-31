#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 * Author: Jaba {I did not write this code myself but even understanding
 * some part of it was a difficult for me at this time}.
 * Credit: @mecomonteshbtn on github
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (!h || !(*h))
		*h = new_node;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			new_node->prev = temp->prev;
		else
			new_node->prev = temp;
		if (idx == i)
			temp->next = new_node, new_node->prev = temp;
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = new_node;
			else
				*h = new_node;
			temp->prev = new_node;
			new_node->next = temp;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
