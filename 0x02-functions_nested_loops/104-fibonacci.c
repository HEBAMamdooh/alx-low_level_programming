#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers,
 *		starting with 1 and 2, followed by a new line.
 *
 * Return: 0 for success
*/

int main(void)
{
	int count;
	long double fib[100];

	fib[0] = 1;
	fib[1] = 2;

	for (count = 2; count < 100; count++)
	{
		fib[count] = fib[count - 1] + fib[count - 2];
	}

	for (count = 0; count < 98; count++)
	{
		printf("%lf, ", fib[count]);
	}
	printf("\n");

	return (0);
}
