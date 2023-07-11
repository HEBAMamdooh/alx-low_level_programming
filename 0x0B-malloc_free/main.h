#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * create_array -  creates an array of chars,
 *  	and initializes it with a specific char.
 * _strdup - pointer to the duplicate string.
 * str_concat - concatenates two strings.
 * alloc_grid - returns pointer to a 2d array of integers.
 * free_grid -frees a 2d grid.
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
