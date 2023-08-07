#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Pointer to file name.
 * @text_content: A NULL terminated string to add at the end of the file.
 *
 * Return: 1 -> Success.
 *		-1 -> Fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
