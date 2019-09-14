#include "lists.h"

/**
 * add_dnodeint - function that adds a new node in a double linked list
 * @head: double pointer to the first node
 * @n: data
 * Return: Null if failed or the address of the new node if successed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
