#include "main.h"

/**
 * _pow_recursion -  the value of x raised to the power of y.
 *
 * @x: int number.
 * @y: int number.
 *
 * Return: x ^ y, (-1): if y is negative
*/

int _pow_recursion(int x, int y)
{
	int power;

	power = 0;

	if (y == 0)
		return (1);
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		power = x * _pow_recursion(x, y - 1);
		return (power);
	}
}
