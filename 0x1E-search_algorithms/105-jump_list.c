#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches using the Jump search algorithm
 *
 * @list: linked list of integers to be traversed
 * @size: size of the array
 * @value: value to be searched for
 * Return: integer, index found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, j, m;
	listint_t *temp, *current;

	if (!list)
		return (NULL);

	m = (size_t)sqrt(size);
	i = m;
	temp = list;
	current = list;
	while (i < size)
	{
		for (j = 0; j < m; j++)
			temp = temp->next;
		printf("Value checked at index[%li] = [%d]\n", temp->index, temp->n);
		if (temp->n >= value)
			break;
		current = temp;
		i += m;
	}
	if (i >= size)
	{
		while (temp->next)
			temp = temp->next;
		printf("Value checked at index[%li] = [%d]\n", temp->index, temp->n);
	}
	printf("Value found between indexes [%li] and [%li]\n",
	current->index, temp->index);
	while (current != temp->next)
	{
		printf("Value checked array[%li] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
