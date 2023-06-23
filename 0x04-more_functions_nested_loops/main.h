#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * isupper : to check letter type
 * isdigit : checks for a digit (0 through 9).
 * mul : a function that multiplies two integers.
 * print_numbers : prints the numbers, from 0 to 9, followed by a new line.
 * print_most_numbers : prints the numbers, from 0 to 9, followed by a new line, except 2 , 4.
 * more_numbers : prints 10 times the numbers, from 0 to 14, followed by a new line.
 * print_line : draws a straight line in the terminal.
 * print_diagonal : draws a diagonal line on the terminal.
 * print_square : prints a square, followed by a new line.
 * print_triangle : prints a triangle, followed by a new line.
 **/

int _putchar(char c);
int _isupper(int);
int _isdigit(int n);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif /* MAIN_H */
