#include <stdio.h>
#include "main.h"

/**
 * print_all - prints all arguments it receives.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: 0 on success.
*/

int print_all(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
