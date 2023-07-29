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
 * _abs :  computes the absolute value of an integer.
 * print_last_digit :  prints the last digit of a number.
 * jack_bauer : prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 * times_table : prints the 9 times table, starting with 0.
 * add : adds two integers and returns the result.
 * print_to_98 : prints all natural numbers from n to 98,
 *		followed by a new line.
 * print_times_table :  prints the n times table, starting with 0.
*/

int _putchar(char character);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int);
int print_sign(int);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif /* MAIN_H */
