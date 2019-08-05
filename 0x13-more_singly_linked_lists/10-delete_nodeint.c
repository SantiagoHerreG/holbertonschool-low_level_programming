#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes a node of a list
 * @head: double pointer to the beginning of the line
 * @index: index of the node to be erased
 * Return: 1 if succeed or -1 else
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;

	listint_t *temp, *next_node, *node_to_free;

	if (!(*head))
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}

	while (temp->next)
	{
		if (i == index)
		{
			node_to_free = temp->next;
			next_node = temp->next->next;
			temp->next = next_node;
			free(node_to_free);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
