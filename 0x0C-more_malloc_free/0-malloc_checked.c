#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 *
 * @b: size of array
 *
 * Return: pointer to allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = (void *)malloc(b);

	if (b <= 0)
		exit(98);

	if (ptr = NULL)
		exit(98);
	return (ptr);
}