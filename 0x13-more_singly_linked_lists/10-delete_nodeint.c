#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at an index of a linked list.
 *
 * @head: The head node.
 * @index: Index of the node that should be deleted, starting at 0
 *
 * Return: 1 -> success.
 *		-1 -> fail.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp, *new;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}

	temp = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}
