#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * reset_to_98 - takes a pointer to an int as parameter,
 *	updates the value it points to to 98
 * swap_int - swaps the values of two integers.
 * _strlen - returns the length of a string.
 * _puts -  prints a string, followed by a new line, to stdout.
 * print_rev - prints a string, in reverse, followed by a new line.
 * rev_string - reverses a string.
 * puts2 - prints every other character of a string,
 *	starting with the first character
 * puts_half : prints half of a string.
 * print_array : prints n elements of an array of integers
 * *_strcpy : copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
*/

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

#endif /* MAIN_H */

