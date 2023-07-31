#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: A pointer of the head node
 * @idx: The index of the list where new node should be added.
 * @n: The new node.
 *
 * Return: The address of the new node,
 *		null -> on fail.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned  int x;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;

		for (x = 0; x < idx - 1 && temp != NULL; x++)
			temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
