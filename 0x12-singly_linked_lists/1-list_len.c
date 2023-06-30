# include "lists.h"

/**
 * list_len - function that prints out length of a linked list
 * @h: pointer to the struct list
 * Return: 'listLen' length of the string
 */

size_t list_len(const list_t *h)
{
	size_t listLen = 0;

	for (; h != NULL; listLen++)
	{
		h = h->next;
	}

	return (listLen);
}

