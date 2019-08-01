#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints a list of arguments from a linked list
 * @h: pointer to the head of the list (to the first node)
 * Return: count of nodes printed
 */

unsigned int list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
