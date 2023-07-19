#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @d: The dog object.
 *
 * Return: nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
