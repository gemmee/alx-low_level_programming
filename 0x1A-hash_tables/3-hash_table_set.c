#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key
 *
 * Description: In case of collision, add the new node at the
 * beginning of the list
 * Return: 1 on success, 0 otherwise
 * Author: Gamachu AD
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *s;

	if (!key || !ht) /* Empty string */
		return (0);
	node = malloc(sizeof(*node));
	if (!node)
		return (0);

	node->key = (char *)key;
	s = strdup(value);
	if (!s)
	{
		free(node);
		return (0);
	}
	node->value = s;
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = node;
	}
	else /*collision occurred*/
	{
		/*insert at beginning*/
		node->next = (ht->array)[index];
		(ht->array)[index] = node;
	}
	return (1);
}
