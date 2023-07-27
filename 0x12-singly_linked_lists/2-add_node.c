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
 * add_node - add a new node at beginning of a list.
 *
 * @head: head of a list.
 * @str: value to insert into new node.
 *
 * Return: Pointer to the new node,
 *		NULL->fail.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;

	*head = add;

	return (add);
}
