#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * malloc_checked -  allocates memory using malloc.
 * string_nconcat - concatenates two strings.
 * _calloc - allocates memory for an array, using malloc.
 * array_range - creates an array of integers.
 * _realloc - reallocates a memory block using malloc and free.
*/

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */