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
	listint_t *new;
	unsigned int node_count = 0;

	if (temp == NULL && idx != 0)
		return (NULL);

	while (temp && node_count < idx - 1)
	{
		temp = temp->next;
		node_count++;
	}
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (node_count + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	return (NULL);
}
