#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: the converted string to numbers
 *
 * Return: s
*/

char *leet(char *s)
{
	int i, j;

	char *x;

	x = "aAeEoOtTlL4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == x[j])
				s[i] = x[j + 10];
		}
	}
	return (s);
}
