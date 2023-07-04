# include "lists.h"

/**
 * *add_nodeint - function that adds node to beginning of a list
 * @head: pointer to the head node pointer
 * @n: data defined from the struct variable
 * Return: 'node' reference to the added nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

