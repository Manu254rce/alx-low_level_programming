# include "lists.h"

/**
 * free_list - function that fres a linked list
 * @head: pointer variable
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}

