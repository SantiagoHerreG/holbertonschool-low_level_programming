#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: double linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current, *swap;
	int flag = 0;

	if (!list || !*list)
		return;

	temp = *list;
	while (temp && temp->next)
	{
		current = temp->next;
			while (current->prev && current->prev->n > current->n)
			{
				swap = current->prev;
				if (!swap->prev)
					*list = current;
				else
					swap->prev->next = current;
				swap->next = current->next;
				if (current->next)
					current->next->prev = swap;
				current->prev = swap->prev;
				current->next = swap;
				swap->prev = current;
				print_list(*list);
				flag++;
				continue;
			}
		if (!flag)
			temp = temp->next;
		else
			temp = temp->prev;
		flag = 0;
	}
}
