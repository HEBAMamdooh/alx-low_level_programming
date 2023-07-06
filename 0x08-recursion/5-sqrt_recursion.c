#include "main.h"

/**
 * sqrt_num - finds square root of n
 *
 * @n: number to square
 * @sqrt: test case for root
 *
 * Return: square root of n or -1 if none
*/

int sqrt_num(int n, int sqrt)
{

	if (n == sqrt * sqrt)
		return (sqrt);

	if (n < sqrt * sqrt)
		return (-1);

	sqrt_num(n, sqrt + 1);
}


/**
 * _sqrt_recursion -  the natural square root of a number.
 *
 * @n: int number.
 *
 * Return: square root, (-1): not have a natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_num(n, 0));
}
