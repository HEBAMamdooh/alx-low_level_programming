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
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
