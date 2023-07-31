#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * @head: A pointer to the head node.
 *
 * Return: The head node’s data (n).
 *		0 -> empty list.
 **/

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	n = first->n;

	free(first);
	return (n);
}
