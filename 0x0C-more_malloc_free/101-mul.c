#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_valid_number - Check if the string contains only digits.
 *
 * @str: string to be checked.
 *
 * Return:  a pointer to the array, or NULL (fail / size = 0 )
*/
int is_valid_number(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * str_to_int - Converts a string to an integer.
 *
 * @str: the converted string.
 *
 * Return: integer.
*/
int str_to_int(char *str)
{
	int i;

	int result;

	result = 0;

	for (i = 0; i < strlen(str); i++)
		result = result * 10 + (str[i] - '0');

	return (result);
}

/**
 * main -  multiplies two positive numbers.
 *
 * @size: size of array
 * @c: assigned char
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
		exit(98);

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
		exit(98);

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
