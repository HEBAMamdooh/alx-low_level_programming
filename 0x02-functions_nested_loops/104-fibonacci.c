#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers,
 *		starting with 1 and 2, followed by a new line.
 *
 * Return: 0 for success
*/

int main(void)
{
	unsigned long x, y, sum;

	int count;

	x = 1;
	y = 2;
	count = 2;

	printf("%lu, %lu, ", x, y);

	while (count < 98)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%lu, ", sum);

		count++;
	}

	printf("\n");

	return (0);
}
