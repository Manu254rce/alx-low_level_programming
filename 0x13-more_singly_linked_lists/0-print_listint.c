# include "lists.h"

/**
 * print_listint - function that prints the elements in a lined list
 * @h: pointer to head node of the list
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	const listint_t *node = h;

	for (; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		count++;
	}

	return (count);
}

