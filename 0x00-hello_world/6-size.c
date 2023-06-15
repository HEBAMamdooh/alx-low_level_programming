#include <stdio.h>

/**
 * main - print sizes
 *
 * Description: C program that prints the size of different types
 *
 * Return: Always 0 -> Success
 *
*/

int main(void)
{
	printf("Size of a char: %lu  byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
