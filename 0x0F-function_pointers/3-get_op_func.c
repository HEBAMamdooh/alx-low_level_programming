#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Selects and returns correct function.
 *
 * @s: string containing operand
 *
 * Return: Pointer to function, NULL -> fails.
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
