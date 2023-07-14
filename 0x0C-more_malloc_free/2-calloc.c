#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: size of array
 * @size: assigned char
 *
 * Return: pointer to allocated memory, NULL -> fail
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}