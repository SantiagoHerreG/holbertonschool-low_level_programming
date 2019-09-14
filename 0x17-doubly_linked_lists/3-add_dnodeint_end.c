#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the double linked list
 * @head: double pointer to the first node
 * @n: data
 * Return: address of new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*head));

	if (!new_node)
		return (NULL);

	if (!*head)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	new_node->next = NULL;
	new_node->prev = temp;
	new_node->n = n;
	return (new_node);
}
