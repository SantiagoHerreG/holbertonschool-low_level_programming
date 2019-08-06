#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns a pointer to a node in a list
 * @head: pointer to the first element
 * @index: position of the element
 * Return: pointer to the element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr_temp;

	unsigned int i = 0;

	if (!head)
		return (NULL);

	ptr_temp = head;

	if (index == 0)
		return (ptr_temp);

	while (ptr_temp->next)
	{
		ptr_temp = ptr_temp->next;
		i++;
		if (i == index)
			return (ptr_temp);
	}
	return (NULL);
}
