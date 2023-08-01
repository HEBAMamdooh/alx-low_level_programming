#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Free a linked list.
 *
 * @h: A pointer to the h node.
 *
 * Return: Size of the list that was free’d.
 **/
size_t free_listint_safe(listint_t **h)
{
	size_t n, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (num);

	while (*h != NULL)
	{
		for (n = 0; n < num; n++)
		{
			if (*h == list[n])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;

		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (num);
}
