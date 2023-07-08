#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 *		to make change for an amount of money.
 *
 * @argc: number of arguments.
 * @argv: arguments entered.
 *
 * Return: 0 on success, 1 if not.
 */


int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int num_coins = 0;

	for (int i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);

	return (0);
}
