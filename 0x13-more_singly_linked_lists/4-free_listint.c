# include "lists.h"

/**
 * free_listint - function that frees elements in a linked list
 * @head: pointer to first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;

	for (; node != NULL; node = head)
	{
		head = head->next;
		free(node);
	}
}

