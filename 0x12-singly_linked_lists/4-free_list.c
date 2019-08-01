#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that deletes a linked list freeing the memory
 * @head: pointer to the linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp, *store;

	store = head;
	while (store != NULL)
	{
		temp = store->next;
		free(store->str);
		free(store);
		store = temp;
	}
}
