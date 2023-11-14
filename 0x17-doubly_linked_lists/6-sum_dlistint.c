#include "lists.h"

/**
 * sum_dlistint - get sum of data in doubly linked list.
 *
 * @head: pointer to head of doubly linked list.
 *
 * Return: sum of the nodes
 *	0 -> empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
