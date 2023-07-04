# include "lists.h"

/**
 * free_listint2 - function that frees nodes
 * @head: pointer to the head node pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	*head = NULL;
}

