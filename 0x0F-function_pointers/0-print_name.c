#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: string to add
 * @f: pointer to function
 *
 * Return: nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
