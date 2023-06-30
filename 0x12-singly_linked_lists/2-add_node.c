# include "lists.h"

/**
 * add_node - pointer function that adds a new element to a list node
 * @head: pointer to a pointer
 * @str: string to add a new value
 * Return: address to new address
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (; str[i]; i++)
		;

	newNode->len = i;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}

