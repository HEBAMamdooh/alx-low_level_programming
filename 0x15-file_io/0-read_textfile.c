#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 *
 * @filename: Pointer to file name.
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters could read, print,
 *		0 -> filename is NULL.
 *		0 -> On fail.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars_read;
	FILE *file;
	char *buffer;

	chars_read = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	chars_read = fread(buffer, sizeof(char), letters, file);
	if (chars_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[chars_read] = '\0';

	printf("%s", buffer);

	fclose(file);
	free(buffer);

	return (chars_read);
}
