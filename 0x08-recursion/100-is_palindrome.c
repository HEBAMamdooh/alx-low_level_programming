#include "main.h"

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
