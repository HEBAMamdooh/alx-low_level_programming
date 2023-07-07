#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * _islower : checks for lowercase character.
 * _isalpha : checks for alphabetic character.
 * _abs :  computes the absolute value of an integer.
 * _isupper - checks if value is upper case.
 * _isdigit - checks if value a digit from 0 to 9.
 * _strlen - returns the length of a string.
 * _puts -  prints a string, followed by a new line, to stdout.
 * _strcpy : copies the string pointed to by src,
 * 		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 * _atoi - converts a string to an integer.
 * _strcat -  appends the src string to the dest string.
 * _strncat - updates pointer value.
 * _strncpy - copies a string.
 * _strcmp - compares two strings.
 * _memset - fills memory with a constant byte.
 * _memcpy - copies memory area.
 * _strchr - locates a character in a string.
 * _strspn - gets the length of a prefix substring.
 * _strpbrk - searches a string for any of a set of bytes.
 * _strstr - locates a substring.
 */

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */

