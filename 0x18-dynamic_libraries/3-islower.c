#include "main.h"

/**
 * _islower - returns 1 if char is lowercase
 *
 * @letter:the checked character if lowercase, type : int
 *
 * Return: 1 if lower case, 0 otherwise
*/

int _islower(int letter)
{
	if (letter >= 97 && letter <= 122)
		return (1);
	else
		return (0);
}
