#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a node at the end of list
 * @head: double pointer to the first node
 * @n: data to be initialized
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	last = (*head);

	if (!(*head))
	{
		(*head) = new_node;
		return (new_node);
	}

	while (last->next)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
