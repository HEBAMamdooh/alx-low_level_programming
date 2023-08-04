#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip from one number to other.
 *
 * @n: 1St Number.
 * @m: 2Nd Number.
 *
 * Return: Number of bits needed to flip.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, result;
	unsigned int num1, num2;

	num2 = 0;
	result = 1;
	diff = n ^ m;
	for (num1 = 0; num1 < (sizeof(unsigned long int) * 8); num1++)
	{
		if (result == (diff & result))
			num2++;
		result <<= 1;
	}

	return (num2);
}
