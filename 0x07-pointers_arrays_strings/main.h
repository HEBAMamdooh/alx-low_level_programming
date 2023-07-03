#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * _memset - fills memory with a constant byte
 * _memcpy - copies memory area.
 * _strchr - locates a character in a string.
 * _strspn - gets the length of a prefix substring.
*/

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */

