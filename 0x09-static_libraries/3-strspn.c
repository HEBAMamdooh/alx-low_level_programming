#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: bytes being compared
 *
 * Return:  a pointer to s.
*/

unsigned int _strspn(char *s, char *accept)
{
	int x, y, n;

	for (x = 0; s[x] != '\0'; x++)
	{
		n = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				n = 1;
			}
		}
		if (n == 0)
		{
			return (x);
		}
	}
	return (x);
}

