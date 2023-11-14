#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 *
 * @h: pointer to the head.
 *
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node += 1;
	}
	return (node);
}
