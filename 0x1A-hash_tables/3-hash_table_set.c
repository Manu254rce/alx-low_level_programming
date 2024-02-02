# include "hash_tables.h"

/**
 * hash_table_set - functin that inserts an element into a hash table
 * @ht: the hash table to be added or updated with the key value
 * @key: the ky attribute from the hash table struct
 * @value: the value attribute
 * Return: 1 if `Success`, 0 if `Failure`
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
