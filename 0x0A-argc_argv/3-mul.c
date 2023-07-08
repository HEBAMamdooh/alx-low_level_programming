#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - multiplies two numbers.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: 0 on success, 1 (Error) if not.
*/

int multiply(int argc, char *argv[])
{
	int num1, num2;
	char *s1 = argv[1];
	char *s2 = argv[2];

	num1 = num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (s1[0] == '-')
		num1 = -1 * atoi(&s1[1]);
	else
		num1 = atoi(&s1[0]);

	if (s2[0] == '-')
		num2 = -1 * atoi(&s2[1]);
	else
		num2 = atoi(&s2[0]);

	printf("%d\n", num1 * num2);
	return (0);
}
