#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list of arguments from a linked list
 * @h: pointer to the head of the list (to the first node)
 * Return: count of nodes printed
 */

unsigned int print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		if (!h->str)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
