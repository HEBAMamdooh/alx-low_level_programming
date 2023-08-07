#include "main.h"

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
	int fperm;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fperm = open(filename, O_WRONLY | O_APPEND);

	if (fperm == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fperm, text_content, _strlen(text_content));
	close(fperm);

	if (len == -1)
		return (-1);

	return (1);
}
