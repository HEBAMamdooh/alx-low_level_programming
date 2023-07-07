#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: a pointer to the string.
 * @c: the character to be searched for.
 *
 * Return: a pointer to the first occurrence of the character in the string,
 *	or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
