#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * Description:  copies a string.
 *
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to copy
 *
 * Return:  pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

