#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
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
