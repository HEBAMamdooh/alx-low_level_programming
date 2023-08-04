#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number,
 *	0 -> b is NULL,
 *	0 -> Chars is not 0 or 1.
 **/

unsigned int binary_to_uint(const char *b)
{
	int num2;
	unsigned int converted;

	converted = 0;
	if (!b)
		return (0);
	for (num2 = 0; b[num2] != '\0'; num2++)
	{
		if (b[num2] != '0' && b[num2] != '1')
			return (0);
	}
	for (num2 = 0; b[num2] != '\0'; num2++)
	{
		converted <<= 1;
		if (b[num2] == '1')
			converted += 1;
	}
	return (converted);
}
