#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * the node at index index of
 * a listint_t linked list.
 * @head: struct linked list head
 * @index:  index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_head = *head;
	listint_t *next;

	unsigned int node_count = 0;

	if (temp_head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp_head->next;
		free(temp_head);
		return (1);
	}

	while (temp_head != NULL)
	{
		if (node_count == index - 1)
		{
			next = temp_head->next;
			temp_head->next = next->next;
			free(next);
			return (1);
		}
		temp_head = temp_head->next;
		node_count++;
	}

	return (-1);
}
