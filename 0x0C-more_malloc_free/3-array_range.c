#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min integer value.
 * @max: max integer value.
 *
 * Return: pointer to the newly created array, NULL in fail.
*/

int *array_range(int min, int max)
{
	int *arr;

	int i, size;

	size = max - min + 1;
	arr = (int *) malloc(size * sizeof(int));

	if (min > max)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
