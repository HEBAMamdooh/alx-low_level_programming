#include <stdio.h>

/**
 * main - entry point
 *
 * Description: The Alphabet Game
 *
 * Return: 0 -> success
*/

int main(void)
{
	char number = '0';

	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
