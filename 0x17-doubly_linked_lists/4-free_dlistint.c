#include "lists.h"

/**
 * free_dlistint - function that frees a double linked list
 * @head: pointer to the first node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
