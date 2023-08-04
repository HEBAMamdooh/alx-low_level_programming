#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: The given number.
 * @index: The index, starting from 0 of the wanted bit.
 *
 * Return:  Value of the bit at index,
 *		-1 -> Error occurred.
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	result = n & div;

	if (result == div)
		return (1);

	return (0);
}
