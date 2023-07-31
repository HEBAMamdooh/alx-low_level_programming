#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 *
 * @h: the head node
 *
 * Return: Number of elements.
 **/

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
