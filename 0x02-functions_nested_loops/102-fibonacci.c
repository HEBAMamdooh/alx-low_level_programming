#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
*/

int main() 
{
	int x = 0;
	int y = 1;
	unsigned long sum;
	int i;
	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		printf("%lu ", sum);
		x = y;
		y = sum;
	}
	printf("%lu\n",sum + x);
	return (0);
}
