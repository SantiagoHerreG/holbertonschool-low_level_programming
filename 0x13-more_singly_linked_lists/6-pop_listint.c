#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the first node of a list
 * @head: double pointer to the beginning of the line
 * Return: integer with the data in the node
 */
int pop_listint(listint_t **head)
{
	int i = 0;

	listint_t *temp;

	if (!(*head))
		return (0);

	temp = *head;

	i = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (i);
}
