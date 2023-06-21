#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * my Library:
 * _putchar: prints a character
 * print_alphabet : prints a lowercase
 * print_alphabet_x10 : prints a lowercase rebeated 10 times
 * _islower : checks for lowercase character
 * _isalpha : checks for alphabetic character.
 * print_sign : prints the sign of a number.
*/

int _putchar(char character);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int);
int print_sign(int);

#endif

