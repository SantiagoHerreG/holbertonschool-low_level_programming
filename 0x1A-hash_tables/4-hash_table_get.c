#include "hash_tables.h"

/**
 * hash_table_get - function that adds an element to the hash table.
 * @ht: pointer to the hash table structure
 * @key: string to be looked for
 * Return: pointer to the value string
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (!strcmp(temp->key, key))
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
