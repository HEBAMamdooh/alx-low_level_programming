#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
*/

int main() 
{
	int x = 1;
	int y = 2;
	int sum;
	int i;
	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		printf("%d ", sum);
		x = y;
		y = sum;
	}
	printf("\n");
	return (0);
}
