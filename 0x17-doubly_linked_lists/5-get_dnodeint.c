#include "lists.h"

/**
 * get_dnodeint_at_index - get a node in a linked list
 * @head: pointer to the first node
 * @index: the index to look for
 * Return: the address of the node or null if it fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int node_index = 0;

	if (!head)
		return (NULL);

	temp = head;

	while (temp)
	{
		if (node_index == index)
			break;
		temp = temp->next;
		node_index++;
	}
	return (temp);
}
