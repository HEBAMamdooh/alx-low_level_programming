#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 *		and initializes it with a specific char.
 *
 * @size: size of array
 * @c: assigned char
 *
 * Return:  a pointer to the array, or NULL (fail / size = 0 )
*/

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	n = (char *)malloc(size * sizeof(char));

	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;

	return (n);
}

