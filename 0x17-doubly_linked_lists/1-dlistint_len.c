#include "lists.h"

/**
 * dlistint_len - function that prints a double linked list
 * @h: pointer to the first node
 * Return: the count of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
