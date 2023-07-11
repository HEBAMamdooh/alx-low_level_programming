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
 * _strdup - pointer to the duplicate string.
 *
 * @str: given string.
 *
 * Return: pointer to duplicated string, NULL on fail.
*/

char *_strdup(char *str)
{
	char *dest;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	dest = (char *)malloc((string_length(str)) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = str[i];

	return (dest);
}
