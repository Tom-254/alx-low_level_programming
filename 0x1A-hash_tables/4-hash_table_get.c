#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value assocaited with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 * Return: The value associated with the element, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item_node;
	unsigned long int index;

	if (!ht || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item_node = ht->array[index];
	while (item_node != NULL)
	{
		if (strcmp(item_node->key, key) == 0)
			return (item_node->value);
		item_node = item_node->next;
	}
	return (NULL);
}
