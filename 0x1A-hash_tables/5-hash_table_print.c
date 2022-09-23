#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item_node;
	unsigned long int index = 0;
	int first = 0;

	if (!ht)
		return;

	printf("{");
	while (index < ht->size)
	{
		item_node = ht->array[index];
		if (item_node == NULL)
		{
			index++;
			continue;
		}
		if (first == 0)
		{
			printf("\'%s\': \'%s\'", item_node->key, item_node->value);
			first++;
		}
		else
			printf(", \'%s\': \'%s\'", item_node->key, item_node->value);
		while (item_node->next != NULL)
		{
			item_node = item_node->next;
			printf(", \'%s\': \'%s\'", item_node->key, item_node->value);
		}

		index++;
	}
	printf("}\n");
}
