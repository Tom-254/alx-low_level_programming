#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key to add. Cannot be an empty string
 * @value: The value associated with the key. Must be a duplicate. Can be an
 * empty string
 *
 * Return: 1 if success, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_item = ht->array[index];
	while (new_item != NULL)
	{
		if (strcmp(new_item->key, key) == 0)
		{
			free(new_item->value);
			new_item->value = strdup(value);
			if (new_item->value == NULL)
				return (0);
			return (1);
		}
		new_item = new_item->next;
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = strdup(key);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (0);
	}
	new_item->next = NULL;
	ht->array[index] = new_item;
	return (1);
}
