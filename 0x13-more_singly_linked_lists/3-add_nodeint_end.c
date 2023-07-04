# include "lists.h"

/**
 * *add_nodeint_end - function that adds node to end of list
 * @head: pointer to first node in list
 * @n: data value of the list node
 * Return: address to tail node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		listint_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = node;
	}

	return (node);
}

