#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add node at end of a linked list.
 *
 * @head: A pointer to the head node.
 * @n: Integer added to the list.
 *
 * Return: Address of the new element,
 *		NULL -> on fail.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ref;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	ref = *head;

	while (ref->next != NULL)
		ref = ref->next;

	ref->next = new;

	return (new);
}
