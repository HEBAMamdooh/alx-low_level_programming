#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * create_file - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: Pointer to file name.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 -> Success.
 *		-1 -> Fail.
*/

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		size_t text_length = strlen(text_content);

		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
