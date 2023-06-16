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
	char low_letter = 'a';
	char upper_letter = 'A';

	while (low_letter <= 'z')
	{
		putchar(low_letter);
		low_letter++;
	}
	while (upper_letter <= 'Z')
	{
		putchar(upper_letter);
		upper_letter++;
	}
	putchar('\n');

	return (0);
}
