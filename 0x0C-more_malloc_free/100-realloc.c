#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to the memory allocated
 * @old_size: size in bytes, of the allocated space.
 * @new_size: new size in bytes of the new memory block.
 *
 * Return: ptr -> If new_size == old_size.
 *	NULL -> If new_size == 0 ,and ptr != NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	new_ptr = malloc(new_size);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);
}
