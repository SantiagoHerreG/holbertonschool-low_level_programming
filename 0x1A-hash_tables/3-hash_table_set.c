#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table structure
 * @key: string to be looked for
 * @value: value of the data
 * Return: 1 on success or 0 on error
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = calloc(strlen(value) + 1, sizeof(char));
			if (!temp->value)
				return (0);
			strcpy(temp->value, value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = calloc(strlen(key) + 1, 1);
	if (!new_node->key)
		return (0);
	new_node->value = calloc(strlen(value) + 1, 1);
	if (!new_node->value)
		return (0);
	strcpy(new_node->key, key), strcpy(new_node->value, value);
	new_node->next = NULL;

	if (!ht->array[index])
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index], ht->array[index] = new_node;
	}
	return (1);
}
