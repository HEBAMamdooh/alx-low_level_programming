#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: nothing.
*/

void main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	char *main_ptr = (char *)main;

	for (int i = 0; i < num_bytes; i++)
		printf("%02x ", *(main_ptr + i) & 0xff);
	
	printf("\n");
}

