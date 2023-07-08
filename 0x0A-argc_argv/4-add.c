#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_num - verifies if string has only numbers.
 *
 * @str: string to check.
 *
 * Return: 1 if only numbers, 0 if not.
*/

int check_num(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] < '0' || str[n] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - sum two numbers.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: 0 on success, 1 (Error) if not.
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
