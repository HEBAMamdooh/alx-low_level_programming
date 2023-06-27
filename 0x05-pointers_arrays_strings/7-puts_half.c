#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str : input string
 *
 * Return: nothing
 *
*/

void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (str[i] != '\0')
		i++;

	n = i / 2;

	if (i % 2 == 1)
		n++;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
