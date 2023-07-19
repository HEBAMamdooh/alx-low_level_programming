#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98/99/100 if error
*/
int main(int argc, char *argv[])
{
	int num1, num2, calc;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	calc = op_func(num1, num2);
	printf("%d\n", calc);

	return (0);
}
