#include "main.h"

/**
 * base_to_power - calculate (base and power)
 *
 * @x: Base of the exponent.
 * @n: Power of the exponent.
 *
 * Return: value of base and power
 **/
unsigned long int base_to_power(unsigned int x, unsigned int n)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= n; i++)
		num *= x;
	return (num);
}
/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The int Number to be converted.
 *
 * Return: Nothing.
 **/

void print_binary(unsigned long int n)
{
	unsigned long int div, result;
	char flag;

	flag = 0;
	div = base_to_power(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		result = n & div;
		if (result == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
			_putchar('0');

		div >>= 1;
	}
}
