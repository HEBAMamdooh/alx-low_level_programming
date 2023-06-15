#include <unistd.h>

/**
 * main - print sizes
 *
 * Description: C program prints a message
 *
 * Return: Always 1
 *
*/

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int len = sizeof(quote) - 1;

	write(2, quote, len);

	write(2, "\n", 1);
	return (1);
}
