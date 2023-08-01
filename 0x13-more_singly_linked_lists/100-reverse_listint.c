#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint -  Reverse a linked list.
 *
 * @head: A pointer to the head node.
 *
 * Return: Pointer to the first node of the reversed list.
 **/


listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	old = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
