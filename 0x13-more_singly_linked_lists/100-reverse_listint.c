#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a linked list
 * @head: double pointer to the beginning of the list
 * Return: pointer to the beginning of the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (!(*head))
		return (NULL);

	while (*head)
	{
		if (!(*head)->next)
		{
			(*head)->next = prev;
			break;
		}
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (next);
}
