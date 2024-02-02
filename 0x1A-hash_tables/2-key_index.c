# include "hash_tables.h"

/**
 * key_index - function that retrieves the key index of a
 * hash node
 * @key: pointer to the key attribute
 * @size: size of the associative array
 * Return: the index on which the key value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = (*hash_djb2)(key);
	index = hash % size;

	return (index);
}
