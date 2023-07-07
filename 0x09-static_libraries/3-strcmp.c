#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * Description:  compares two strings
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return:  integer.
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

