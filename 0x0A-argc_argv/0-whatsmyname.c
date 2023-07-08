#include <stdio.h>
#include "main.h"

/**
 * main - prints the file name.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	argc = argc;

	return (0);
}
