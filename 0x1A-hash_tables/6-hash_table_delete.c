#include "hash_tables.h"

/**
 * hash_table_delete - Frees the hash table
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item_node;
	hash_node_t *next_item_node;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		item_node = ht->array[index];
		while (item_node != NULL)
		{
			next_item_node = item_node->next;
			free(item_node->key);
			free(item_node->value);
			free(item_node);
			item_node = next_item_node;
		}
	}
	free(ht->array);
	free(ht);
}
