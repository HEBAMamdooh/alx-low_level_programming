#include "lists.h"

/**
 * add_dnodeint_end - add node to end of the list.
 *
 * @head: pointer to the head.
 * @n: node data.
 *
 * Return: address of new node,
 *		or Null -> on fail.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->prev = NULL;
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->prev = tmp;
	return (node);
}
