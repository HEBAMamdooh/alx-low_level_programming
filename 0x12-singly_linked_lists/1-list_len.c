#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list.
 *
 * @hh: Pointer to the list.
 *
 * Return: Number of nodes.
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
