#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * _strcat -  appends the src string to the dest string.
 * _strncat - updates pointer value
 * _strncpy - copies a string.
 * _strcmp - compares two strings
 * cap_string - capitalize all words in a string
 * leet - encodes a string into 1337.
*/

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif /* MAIN_H */

