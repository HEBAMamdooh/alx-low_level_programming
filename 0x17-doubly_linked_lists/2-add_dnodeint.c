#include "lists.h"

/**
 * add_dnodeint - add node to front of the list.
 *
 * @head: pointer to the head.
 * @n: node data.
 *
 * Return: address of new node,
 *		or Null -> on fail.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(struct dlistint_s));
	if (node == NULL)
		return (NULL);

	node->prev = NULL;
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
		return (node);
	}
}
