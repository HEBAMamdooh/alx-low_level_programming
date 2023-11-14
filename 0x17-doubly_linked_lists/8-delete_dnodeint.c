#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *				at a given index.
 *
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: 1-> success.
 *         -1 -> fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		(*head)->prev = NULL;
		return (1);
	}
	while (i != index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
