#include <stdio.h>

/**
 * main - Prints base 10 numbers
 *
 * Description: Prints numbers 0-9
 *
 * Return: 0 for success
*/
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
