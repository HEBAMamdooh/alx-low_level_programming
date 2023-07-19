#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - executes a function given as a parameter on each element of an array.
 *
 * @size: The size of the array.
 * @action: A pointer to the function needed to use.
 *
 * Return: nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
