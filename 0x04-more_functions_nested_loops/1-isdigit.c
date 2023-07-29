#include "main.h"

/**
 * _isdigit - checks if value a digit from 0 to 9
 *
 * @n: the checked int
 *
 * Return: 1 if c is a digit, otherwise 0
 **/

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	else
		return (0);
}
