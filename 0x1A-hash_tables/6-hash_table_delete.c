#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes the whole hash table.
 * @ht: pointer to the hash table structure
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *current;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			current = temp->next;
			free(temp->key), free(temp->value);
			free(temp);
			temp = current;
		}
	}
	free(ht->array);
	free(ht);
}
