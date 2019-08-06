#include "lists.h"
#include <stdlib.h>

/**
 * test_last_position - function that assigns new node in the last position
 * @temp: pointer to last position of the list
 * @new_node: pointer to new node to add
 * Return: pointer to the new node
 */
listint_t *test_last_position(listint_t *temp, listint_t *new_node)
{
		temp->next = new_node;
		new_node->next = NULL;
		return (new_node);
}

/**
 * insert_nodeint_at_index - function that inserts a node in certain place
 * @head: pointer to the first element
 * @idx: index where is going to be placed the new node
 * @n: data to be inserted
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node, *next_node;
	unsigned int k = 1;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	temp = *head;
	if (idx == 0)
	{
		if (!(head))
			new_node->next = NULL;
		else
			new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	else if (!(*head) && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	while (temp->next)
	{
		if (k == idx)
		{
			next_node = temp->next;
			temp->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
		k++;
		temp = temp->next;
	}
	if (k == idx)
		return (test_last_position(temp, new_node));
	free(new_node);
	return (NULL);
}
