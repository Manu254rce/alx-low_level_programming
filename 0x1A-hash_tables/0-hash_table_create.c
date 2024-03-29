# include "hash_tables.h"

/**
 * hash_table_create - function that creates a new hash
 * table
 * @size: the size of the associative array
 * Return: the memory address of the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; ++i)
		new_table->array[i] = NULL;

	new_table->size = size;
	return (new_table);
}
