#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Sum of 2 ints.
 *
 * @a: The 1st int.
 * @b: The 2nd int.
 *
 * Return: The Sum.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The difference  of 2 ints.
 *
 * @a: The 1st int.
 * @b: The 2nd int.
 *
 * Return: The difference.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  The product of 2 ints.
 *
 * @a: The 1st int.
 * @b: The 2nd int.
 *
 * Return: The product.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The result of the division of 2 ints.
 *
 * @a: The 1st int.
 * @b: The 2nd int.
 *
 * Return: The division result.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The remainder of the division of 2 ints.
 *
 * @a: The 1st int.
 * @b: The 2nd int.
 *
 * Return: The remainder.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
