#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - initializes a new node at the beggining of the list
 * @head: pointer to the first node
 * @n: data to initialize
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
