#include "main.h"

/**
 * more_numbers : prints -> 0 to 14 in 10 lines.
 *
 * Description: prints from 0 to 14 ten times, followed by a new line.
 *
 * Return: nothing
 **/

void more_numbers(void)
{
	int num, line;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
