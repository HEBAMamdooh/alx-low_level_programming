#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - Returns the length of a string.
 *
 * @s : Pointer to string.
 *
 * Return: String length.
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

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
		size_t text_length = _strlen(text_content);
		bytes_written = fwrite(file_descriptor, text_content, text_length);

		if (bytes_written == -1)
		{
			pclose(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
