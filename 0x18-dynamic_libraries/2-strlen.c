#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s : the string needed to be counted
 *
 * Return: length of string as int number
 *
*/

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
