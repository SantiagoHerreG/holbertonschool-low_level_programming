#include "hash_tables.h"

/**
 * hash_table_print - function that prints the whole hash table, pythonic way.
 * @ht: pointer to the hash table structure
 * Return: pointer to the value string
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count = 0;
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (count)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			count++;
			temp = temp->next;
		}
	}
	printf("}\n");
}
