#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * listint_t linked list, and returns
 * the head node’s data (n).
 * @head: struct linked list head
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *prev_head;
	int data;

	prev_head = *head;

	data = prev_head->n;

	*head = prev_head->next;

	free(prev_head);

	return (data);
}
