#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	if (argc == 2)
	{
		int n, min, money;

		min = 0;

		money = atoi(argv[1]);

		int cents[] = {25, 10, 5, 2, 1};

		for (n = 0; n < 5; n++)
		{
			if (money >= cents[n])
			{
				min += money / cents[n];
				money = money % cents[n];
				if (money % cents[n] == 0)
				{
					break;
				}

			}
		}
		printf("%d\n", min);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
