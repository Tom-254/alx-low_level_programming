#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node
 * of a listint_t linked list.
 * @head: struct linked list head
 * @index: index of the node
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count_node;

	count_node = 0;

	while (head != NULL)
	{
		if (count_node == index)
			return (head);

		head = head->next;
		count_node++;
	}

	return (NULL);
}
