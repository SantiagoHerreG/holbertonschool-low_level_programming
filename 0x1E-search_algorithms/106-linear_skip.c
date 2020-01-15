#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches using the linear skip list search algorithm
 *
 * @list: linked list of integers to be traversed
 * @value: value to be searched for
 * Return: integer, index found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp1, *temp2;

	if (!list)
		return (NULL);
	temp1 = list;

	while (temp1->express)
	{
		printf("Value checked at index [%li] = [%d]\n",
		temp1->express->index, temp1->express->n);
		if (temp1->express->n >= value)
			break;
		temp1 = temp1->express;
	}
	if (!temp1->express)
	{
		temp2 = temp1;
		while (temp2->next)
			temp2 = temp2->next;
	}
	else
	{
		temp2 = temp1->express;
	}

	printf("Value found between indexes [%li] and [%li]\n",
	temp1->index, temp2->index);
	while (temp1 != temp2->next)
	{
		printf("Value checked at index [%li] = [%d]\n", temp1->index, temp1->n);
		if (temp1->n == value)
			return (temp1);
		temp1 = temp1->next;
	}
	return (NULL);
}
