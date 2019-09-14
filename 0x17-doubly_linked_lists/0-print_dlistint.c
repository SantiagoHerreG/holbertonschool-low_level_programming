#include "lists.h"

/**
 * print_dlistint - function that prints a double linked list
 * @h: pointer to the first node
 * Return: the count of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
