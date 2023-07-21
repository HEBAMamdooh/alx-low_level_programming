
#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers.
 *
 * @n: Number of the parameters.
 *
 * Return: Integer -> sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int i;

	va_list ap;

	sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
