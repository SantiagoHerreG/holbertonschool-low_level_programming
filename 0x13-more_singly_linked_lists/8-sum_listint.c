#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that adds every single node data
 * @head: pointer to the beginning of the list
 * Return: returns the cummulative sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

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
