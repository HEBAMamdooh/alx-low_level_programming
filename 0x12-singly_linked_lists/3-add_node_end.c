#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 *
 * @s : Pointer to string.
 *
 * Return: String length.
*/

int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * add_node_end - Adds new node to the end of a list.
 *
 * @head: head of the list.
 * @str: String to add to the new node.
 *
 * Return: Pointer to the new node,
 *		NULL->fail.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
