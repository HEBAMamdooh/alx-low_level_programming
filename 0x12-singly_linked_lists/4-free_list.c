#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list..
 *
 * @head: A pointer to the first node of the list.
 *
 * return: Nothing.
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
