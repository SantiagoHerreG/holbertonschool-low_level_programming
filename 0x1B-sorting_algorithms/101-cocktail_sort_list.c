#include "sort.h"
/**
 * right_shift - sorts in left right
 *
 * @list: linked list of integers in nodes
 * @shift: temporal position
 * Return: flag for terminating the process
 */
int right_shift(listint_t **shift, listint_t **list)
{
	listint_t *temp;
	int flag = 0;

	temp = *shift;

	while (temp->next)
	{
		if (temp->n > temp->next->n)
		{
			if (temp->prev)
				temp->prev->next = temp->next;
			if (temp->next && temp->next->next)
				temp->next->next->prev = temp;
			temp->next->prev = temp->prev;
			temp->prev = temp->next;
			temp->next = temp->next->next;
			if (temp->prev)
				temp->prev->next = temp;
			flag++;
			if ((*list)->prev)
				*list = (*list)->prev;
			print_list(*list);
			continue;
		}
		if (temp->next)
			temp = temp->next;
	}
	*shift = temp;
	return (flag);
}

/**
 * left_shift - sorts in left direcction
 *
 * @list: linked list of integers in nodes
 * @shift: temporal position
 * Return: flag for termination
 */
int left_shift(listint_t **shift, listint_t **list)
{
	listint_t *temp;
	int flag = 0;

	temp = *shift;

	while (temp->prev)
	{
		if (temp->n < temp->prev->n)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev && temp->prev->prev)
				temp->prev->prev->next = temp;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			if (temp->next)
				temp->next->prev = temp;
			flag++;
			if ((*list)->prev)
				*list = (*list)->prev;
			print_list(*list);
			continue;
		}
		if (temp->prev)
			temp = temp->prev;
	}
	*shift = temp;
	return (flag);
}
/**
 * cocktail_sort_list - sorts using cocktail algorithm
 *
 * @list: linked list of integers in nodes
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *temp;
	int flag = 1;

	if (!list || !*list)
		return;

	temp = *list;
	while (flag)
	{
		flag = 0;
		flag = right_shift(&temp, list);
		flag = left_shift(&temp, list);
	}
}
