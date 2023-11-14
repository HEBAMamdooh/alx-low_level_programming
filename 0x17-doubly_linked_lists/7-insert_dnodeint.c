#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 *
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: Address of the new node,
 * 	NULL -> on fail.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *tmp, *tmp1;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (i != (idx - 1))
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	if (tmp->next != NULL)
		tmp1 = tmp->next;
	else
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = tmp;
	tmp->next = node;
	node->n = n;
	node->next = tmp1;
	tmp1->prev = node;
	return (node);
}
