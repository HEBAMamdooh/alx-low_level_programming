#include <string.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: a pointer to the string.
 *
 * Return: a pointers s string.
*/

void _puts_recursion(char *s)
{

	int n;

	n = 0;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_puts_recursion(&s[n + 1]);
	}
	else
		_putchar('\n');
}
