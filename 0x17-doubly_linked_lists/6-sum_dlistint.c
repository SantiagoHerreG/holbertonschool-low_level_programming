#include "lists.h"

/**
 * sum_dlistint - sums all the data in a linked list
 * @head: pointer to the first node
 * Return: the sum of the data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
