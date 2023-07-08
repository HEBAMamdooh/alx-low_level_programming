#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - prints one character only.
 * file_name - prints the file name.
 * count - prints the number of arguments passed into it.
 * print_all - prints all arguments it receives.
 * multiply - multiplies two numbers.
 * sum - sum two numbers.
 * change - prints the minimum number of coins
 *		to make change for an amount of money.
 */

int _putchar(char c);
int file_name(int argc, char *argv[]);
int count(int argc, char *argv[]);
int print_all(int argc, char *argv[]);
int multiply(int argc, char *argv[]);
int sum(int argc, char *argv[]);
int change(int argc, char *argv[]);

#endif /* MAIN_H */
