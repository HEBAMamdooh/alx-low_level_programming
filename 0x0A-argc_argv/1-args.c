#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;

	return (0);
}
