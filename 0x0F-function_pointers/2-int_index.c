#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - searches for an integer.
 *
 * @size: The number of elements in the array.
 * @array: An array tlo search in.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: index of the first element when cmp function does not return 0,
 *	-1 -> no element matches | size <= 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
