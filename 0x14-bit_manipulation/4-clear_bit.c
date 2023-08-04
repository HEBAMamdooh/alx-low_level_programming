#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to given number.
 * @index: The index, starting from 0 of the wanted bit.
 *
 * Return: 1 -> worked
 *	-1 -> Error occurred.
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	num = ~(1 << index);

	*n = *n & num;

	return (1);
}
