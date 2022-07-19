#include "lists.h"

/**
 * insert_nodeint_at_index -   inserts a new
 * node at a given position.
 * @head: struct linked list head
 * @idx: the index of the list where the new
 * node should be added.
 * @n: data to be inserted
 * Return: the address of the new node, or
 * NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new_node;
	unsigned int index_at = 0;

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (index_at + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		index_at++;
	}

	return (NULL);
}
