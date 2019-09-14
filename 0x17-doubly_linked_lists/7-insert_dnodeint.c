#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in certain index place
 * @h: pointer to the first node
 * @idx: index where the new node is going to be placed
 * @n: data
 * Return: address of new node or NUll if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int node_ind = 1;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;


	if (!h)
		return (NULL);

	if (!*h && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	temp = *h;

	while (temp || idx == node_ind)
	{
		if (idx == node_ind)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			if (new_node->next)
				new_node->next->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		node_ind++;
	}
	return (NULL);
}
