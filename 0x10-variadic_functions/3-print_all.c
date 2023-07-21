#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints anything.
 *
 * @format: List of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	int i;

	va_list args;

	i = 0;
	va_start(args, format);

	while (format && *(format + i))
	{
		if (*(format + i) == 'c')
			printf("%c", va_arg(args, int));
		else if (*(format + i) == 'i')
			printf("%d", va_arg(args, int));
		else if (*(format + i) == 'f')
			printf("%f", va_arg(args, double));
		else if (*(format + i) == 's')
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		i++;
		if (*(format + i))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
