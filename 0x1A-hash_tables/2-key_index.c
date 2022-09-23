#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key to hash
 * @size: Size of the array of the hash table
 * Return: The index at which the item in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, num_key;

	num_key = hash_djb2(key);
	index = num_key % size;
	return (index);
}
