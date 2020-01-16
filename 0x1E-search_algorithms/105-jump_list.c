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
	while (i < size)
	{
		for (j = 0; j < m; j++)
			temp = temp->next;
		printf("Value checked at index[%li] = [%d]\n", temp->index, temp->n);
		if (temp->n > value)
			break;
		i += m;
	}
	if (i >= size)
	{
		current = temp;
		while (current->next)
			current = current->next;
	}
	else
	{
		current = temp, temp = list;
		for (j = 0; j < i - m; j++)
			temp = temp->next;
	}
	printf("Value found between indexes [%li] and [%li]\n", temp->index,
	current->index);
	while (current->next != temp)
	{
		printf("Value checked array[%li] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
