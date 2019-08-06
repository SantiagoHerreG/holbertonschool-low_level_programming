#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that can print a list with loops
 * @head: pointer to the first node
 * Return: count of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *array[4294967295], *last;

	unsigned int i = 0, k = 0;

	if (!head)
		exit(98);

	last = (listint_t *)head;

	while (last)
	{
		for (k = 0; k < i; k++)
		{
			if (last == array[k])
			{
				printf("-> [%p] %d\n", (void *)last, last->n);
				return (i);
			}
		}
		printf("[%p] %d\n", (void *)last, last->n);
		array[i] = last;
		i++;
		last = last->next;
	}
	return (i);
}
