#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * re_allo_memory - reallocates memory for an array of pointers
 *			to the nodes in a linked list.
 *
 * @list: The old list to append.
 * @size: Size of the new list.
 * @new: Nw node to add to the list.
 *
 * Return: Pointer to the new list.
 */
const listint_t **re_allo_memory(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newList;
	size_t n;

	newList = malloc(size * sizeof(listint_t *));

	if (newList == NULL)
	{
		free(list);
		exit(98);
	}

	for (n = 0; n < size - 1; n++)
		newList[n] = list[n];

	newList[n] = new;
	free(list);

	return (newList);
}

/**
 * print_listint_safe - Print a linked list.
 *
 * @head: The head node.
 *
 * Return: Number of nodes in the list.
 **/


size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = re_allo_memory(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
