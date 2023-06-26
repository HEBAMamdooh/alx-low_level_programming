#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a : the 1st int value
 * @b : the 2nd int value
 *
 * Return: nothing
 *
*/

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
