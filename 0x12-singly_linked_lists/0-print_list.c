# include "lists.h"

/**
 * print_list - function that prints all elements of a list
 * @h: const pointer of the struct
 * Return: Number of elements in a list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}

