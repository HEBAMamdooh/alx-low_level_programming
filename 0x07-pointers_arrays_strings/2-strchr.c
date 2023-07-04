#include "main.h"
#include <stdio.h>
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
	int i;

	if (!(*s || c == '\0'))
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

