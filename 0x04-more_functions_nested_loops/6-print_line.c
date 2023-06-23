#include "main.h"

/**
 * print_line - prints  a straight line in the terminal.
 * @n: the length of the line
 * Return: nothing
*/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
