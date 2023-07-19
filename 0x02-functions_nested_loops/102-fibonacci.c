#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
*/

int main(void)
{
	unsigned long x, y, sum;
	int i;

	x = 0;
	y = 1;

	for (i = 0; i < 49; i++)
	{
		sum = x + y;
		printf("%lu, ", sum);
		x = y;
		y = sum;
	}

	printf("%lu\n", sum + x);
	return (0);
}
