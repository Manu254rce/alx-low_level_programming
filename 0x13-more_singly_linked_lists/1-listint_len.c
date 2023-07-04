# include "lists.h"

/**
 * listint_len - function that determines the length of a linked list
 * @h: pointer to the first node in the list
 * Return: 'count' variable containing length of the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	int count = 0;

	for (; node != NULL; node = node->next)
	{
		++count;
	}

	return (count);
}

