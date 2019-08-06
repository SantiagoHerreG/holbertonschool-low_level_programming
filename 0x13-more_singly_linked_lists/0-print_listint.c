#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the data in the list (integers)
 * @h: pointer to the head of the list
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
