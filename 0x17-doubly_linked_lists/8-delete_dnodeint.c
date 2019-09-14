#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in certain index place
 * @head: double pointer to the first node
 * @index: place where the node is going to be deleted
 * Return: 1 on success or -1 on error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *freed;
	unsigned int node_idx = 1;

	if (!head || !*head)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (temp)
	{
		if (index == node_idx && temp->next)
		{
			freed = temp;
			temp->next = temp->next->next;
			if (temp->next)
				temp->next->prev = temp;
			free(freed);
			return (1);
		}
		temp = temp->next;
		node_idx++;
	}
	return (-1);
}
