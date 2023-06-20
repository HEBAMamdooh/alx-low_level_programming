#include "main.h"

/**
 * main - Entry Point
 *
 * Description: Prints a value using _putchar prototype
 *
 * Return: 0 -> success
*/

int main(void)
{
	char quote[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(quote[c]);
	_putchar('\n');
	return (0);
}
