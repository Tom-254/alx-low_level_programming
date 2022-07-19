#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: struct linked list
 * Return:  number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
