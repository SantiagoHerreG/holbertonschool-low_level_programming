#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that liberates allocated memory of a list
 * @head: pointer to the beginning of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *last, *temp;

	if (!head || !(*head))
		return;

	last = *head;

	while (last)
	{
		temp = last;
		last = last->next;
		free(temp);
	}
	*head = NULL;
}
