#include "main.h"

/**
 * _strcat - updates pointer value
 *
 * Description:  appends the src string to the dest string.
 *
 * @src: second string to copy from
 * @dest: string to be overwritten
 *
 * Return:  pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}
