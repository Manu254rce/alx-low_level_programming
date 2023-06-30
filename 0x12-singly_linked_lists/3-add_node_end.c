# include "lists.h"

/**
 * add_node_end - pointer function for function
 * to add node at end oflinked list
 * @head: pointer function to pointer
 * @str: string tto be added
 * Return: node added at end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int j = 0;
	list_t *lastNode;

	list_t *endNode = malloc(sizeof(list_t));

	if (endNode == NULL)
		return (NULL);

	endNode->str = strdup(str);

	for (; str[j]; ++j)
		;

	endNode->len = j;
	endNode->next = NULL;

	lastNode = *head;

	if (lastNode == NULL)
		*head = endNode;
	else
	{
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = endNode;
	}

	return (*head);
}
