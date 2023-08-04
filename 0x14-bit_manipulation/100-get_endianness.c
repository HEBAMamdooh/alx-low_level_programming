#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 -> big endian,
 *		1 -> little endian.
 **/

int get_endianness(void)
{
	int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
