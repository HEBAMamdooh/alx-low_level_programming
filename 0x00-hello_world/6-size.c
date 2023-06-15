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
	printf("Size of a char:", sizeof(char), "byte(s)\n");
	printf("Size of an int:", sizeof(int), "byte(s)\n");
	printf("Size of a long int:", sizeof(long int), "byte(s)\n");
	printf("Size of a long long int:", sizeof(char), "byte(s)\n");
	printf("Size of a float:", sizeof(float), "byte(s)\n");
	return (0);
}
