#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the hash table that was created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	init_array(ht);

	return (ht);
}

/**
 * init - Initializes array slots to NULL
 * @table: Pointer to a hash table struct
 */
void init_array(hash_table_t *table)
{
	unsigned long int i;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
}
