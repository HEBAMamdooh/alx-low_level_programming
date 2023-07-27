#include "lists.h"
#include <stdio.h>

/**
 * print_list  - print all elements of a linked list.
 *
 * @h: pointer to linked list.
 *
 * Return: Number of nodes.
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
