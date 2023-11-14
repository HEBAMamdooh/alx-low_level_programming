#include "lists.h"

/**
 * print_dlistint - prints all elements of the linked list.
 *
 * @h: pointer to the head.
 *
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node += 1;
	}
	return (node);
}
