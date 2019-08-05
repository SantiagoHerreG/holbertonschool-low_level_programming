#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the data in the list (integers)
 * @h: pointer to the head of the list
 * Return: count of nodes
 */
unsigned long listint_len(const listint_t *h)
{
	unsigned long i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
