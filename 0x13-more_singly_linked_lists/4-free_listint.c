#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that liberates allocated memory of a list
 * @head: pointer to the beginning of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
