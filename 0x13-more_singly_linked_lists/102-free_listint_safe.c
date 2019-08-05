#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - function that can free a list with loops
 * @h: double pointer to the first node
 * Return: count of elements
 */
unsigned int free_listint_safe(listint_t **h)
{
	listint_t *array[10000], *last, *temp;

	unsigned int i = 0, k = 0;

	if (!(*h))
		return (0);

	last = *h;

	while (last)
	{
		for (k = 0; k < i; k++)
		{
			if (last == array[k])
			{
				last = NULL;
				*h = NULL;
				return (i);
			}
		}
		array[i] = last;
		i++;
		temp = last;
		last = last->next;
		free(temp);
	}
	*h = NULL;
	return (i);
}
