#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - searches for an integer.
 *
 * @size: The number of elements in the array.
 * @array: An array tlo search in.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: index of the first element when cmp function does not return 0,
 *	-1 -> no element matches | size <= 0.
*/

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return (*ops[i].f);
		}
		i++;
	}
	return (NULL);
}
