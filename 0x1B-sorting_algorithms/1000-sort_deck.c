#include "deck.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: double linked list
 * Return: void
 */
void sort_deck(deck_node_t **deck)
{
	deck_node_t *temp, *current, *swap;
	int flag = 0;

	if (!deck || !*deck)
		return;

	temp = *deck;
	while (temp && temp->next)
	{
		current = temp->next;
			while (current->prev && current->prev->card->kind >= current->card->kind)
			{
				swap = current->prev;
				if (!swap->prev)
					*deck = current;
				else
					swap->prev->next = current;
				swap->next = current->next;
				if (current->next)
					current->next->prev = swap;
				current->prev = swap->prev;
				current->next = swap;
				swap->prev = current;
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
