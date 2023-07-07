#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string from  src to dest
 *
 * @dest : buffer pointer
 * @src : string pointer
 *
 * Return: the pointer to dest
 *
*/

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (c >= 0)
	{
		dest[c] = src[c];
		if (src[c] == '\0')
			return (dest);
		c++;
	}
	return (dest);
}
