#include "main.h"

/**
 * list_len -    returns the number of elements in a linked list_t list.
 * @h: struct linked list
 * Return:  number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
