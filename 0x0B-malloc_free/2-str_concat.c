#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_length -  returns the length of a string.
 *
 * @l: a pointer to the string.
 *
 * Return: length of a string.
*/

int string_length(char *l)
{
	int c;

	for (c = 0; l[c] != '\0';)
		c++;
	return (c + 1);
}

/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: pointer to string, NULL if fails.
*/

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	i = string_length(s1);

	if (s2 == NULL)
		s2 = "";
	j = string_length(s2);

	dest = (char *)malloc((i + j - 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		dest[i + j] = s2[j];

	dest[i + j] = s2[j];
	return (dest);
}
