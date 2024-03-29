# include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the required hash table
 * @key: the value being retrieved
 * Return: the value associated with the element, or NULL if no key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

