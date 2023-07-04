#ifndef MAIN_H
#define MAIN_H

#include <stdio>

/**
 * putchar - prints one character only.
 * _memset - fills memory with a constant byte
 * _memcpy - copies memory area.
 * _strchr - locates a character in a string.
 * _strspn - gets the length of a prefix substring.
 * _strstr - locates a substring.
 * print_chessboard -  prints the chessboard.
 * print_diagsums - prints the sum of two diagonals of
 *			a square matrix of integers.
*/

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif /* MAIN_H */

