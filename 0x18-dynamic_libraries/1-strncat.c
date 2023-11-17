#include "main.h"

/**
 * _strncat - updates pointer value
 *
 * Description:  appends the n number of values from src to end of dest.
 *
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: bytes from src to use
 *
 * Return:  pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	if (dest[i - 1] != '\0')
		dest[i] = '\0';

	return (dest);
}

