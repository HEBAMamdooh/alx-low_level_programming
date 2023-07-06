#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 *
 * @s: a pointer to the string.
 *
 * Return: length of a string.
*/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
		return (1);
	else
		return (_strlen_recursion(&s[1]) + 1);
}

/**
 * to_check - check if string is a palindrome
 *
 * @s: string to check
 * @length: int num to check the string.
 * @i: counter through string
 *
 * Return: 1 if palindrome, 0 if not
*/

int to_check(char *s, int length, int i)
{
	if (length <= i)
		return (1);

	if (s[i] != s[length])
		return (0);

	return (to_check(s, length - 1, i + 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	return (to_check(s, _strlen_recursion(s) - 1, 0));
}
