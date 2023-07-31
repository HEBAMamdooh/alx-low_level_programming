#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 *
 * @head: The head node.
 * @index: The index of the node, starting at 0
 *
 * Return: n of index,
 *		NULL -> if empty.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
