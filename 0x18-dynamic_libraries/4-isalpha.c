#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 *
 * @c: character to be checked if a letter, lowercase or uppercase
 *
 * Return: 1 if letter, 0 otherwise
*/

int _isalpha(int c)
{
	if (((c <= 90) && (c >= 65)) | ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
