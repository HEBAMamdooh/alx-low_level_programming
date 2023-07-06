#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 *
 * @n: int number
 *
 * Return: factorial of n.
*/

int factorial(int n)
{
	int total;

	total = 0;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		total = n * factorial(n - 1);
		return (total);
	}
}
