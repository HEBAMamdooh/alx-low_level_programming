#include "main.h"
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
 * string_nconcat - concatenates two strings.
 *
 * @s1: size of array
 * @s2: assigned char
 * @n: assigned char
 *
 * Return: pointer to a newly allocated space in memory,
 *		or NULL in fail.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;

	unsigned int size1, size2, i, j;

	size1 = string_length(s1);
	size2 = string_length(s2);
	dest = (char *)malloc((size1 + n) * sizeof(char));

	if (n > size2 - 1)
		n = size2 - 1;

	if (dest == NULL)
		return (NULL);

	if (size1 == 1 && size2 == 1)
		return (NULL);

	for (i = 0; i < size1 - 1; i++)
		dest[i] = s1[i];

	for (j = 0; j <= n; j++)
		dest[i + j] = s2[j];

	dest[i + j] = '\0';

	return (dest);
}