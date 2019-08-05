#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - function that finds if a list has a loop
 * @head: pointer to the beginning of the list
 * Return: pointer to the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (fast->next->next)
	{
		slow = slow->next;
		fast = (fast->next)->next;
		if (slow == fast && slow == head)
			return (slow);
		else if (slow == fast)
		{
			slow = find_listint_loop(head->next);
			if (slow)
				return (slow);
		}
	}
	return (NULL);
}
