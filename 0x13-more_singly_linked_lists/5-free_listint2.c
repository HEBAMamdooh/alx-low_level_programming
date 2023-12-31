#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list, & sets the head to NULL.
 *
 * @head: A pointer to the head node.
 *
 * Return: Nothing.
 **/

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
