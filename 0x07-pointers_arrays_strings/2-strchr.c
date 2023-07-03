#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: the given string.
 * @c: a character may be in the string.
 *
 * Return:  a pointer to c.
*/

char *_strchr(char *s, char c)
{
	int i;

	if (s == '\0')
		return ('\0');
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}

