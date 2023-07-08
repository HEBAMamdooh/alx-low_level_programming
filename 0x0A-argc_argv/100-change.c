#include <stdio.h>
#include <stdlib.h>

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

	if (cents < 0) {
		printf("0\n");
		return (0);
	}

	int num_coins[5] = {0};
	
	int i = 0;

	while (cents > 0)
	{
		num_coins[i] = cents / coins[i];
		cents %= coins[i];
		i++;
	}

	int total_coins = 0;

	for (int j = 0; j < 5; j++)
		total_coins += num_coins[j];

	printf("%d\n", total_coins);

	return (0);
}
