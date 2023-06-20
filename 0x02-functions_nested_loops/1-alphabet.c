#include "main.h"

/**
 * main - Entry Point
 *
 * Description: Prints all lowercase alphbets
 *
 * Return: 0 -> success
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
