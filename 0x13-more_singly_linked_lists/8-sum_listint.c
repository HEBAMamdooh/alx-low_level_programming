#include "lists.h"


/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *
 * @head: The head node.
 *
 * Return: Integer Sum,
 *	0 -> empty list.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
