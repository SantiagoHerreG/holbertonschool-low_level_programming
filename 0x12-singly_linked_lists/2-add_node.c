#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the structure
 * @str: string to be copied into the node data
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *new_node;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = *head;

	*head = new_node;

	new_node->str = strdup(str);

	while (str[i])
		i++;

	new_node->len = i;

	return (new_node);
}
