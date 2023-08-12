#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * print_error_exit - To print exit messages.
 *
 * @code: exit code
 * @error_message: array of pointers to the arguments
 * extra_message:
 *
 * Return: Nothing
 */
void print_error_exit(int code, const char *error_message, const char *extra_message)
{
	dprintf(STDERR_FILENO, "%s%s\n", error_message, extra_message);
	exit(code);
}
/**
 * copy_file - Handle copying files.
 *
 * @source_file: Pointer to a file.
 * @destination_file: Pointer to a file.
 *
 * Return: Nothing.
 */
void copy_file(const char *source_file, const char *destination_file)
{
	int source_fd, destination_fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	source_fd = open(source_file, O_RDONLY);
	if (source_fd == -1)
		print_error_exit(98, "Error: Can't read from file ", source_file);

	destination_fd = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC,
						  S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (destination_fd == -1)
	{
		close(source_fd);
		print_error_exit(99, "Error: Can't write to ", destination_file);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(source_fd);
			close(destination_fd);
			print_error_exit(99, "Error: Can't write to ", destination_file);
		}
	}

	if (bytes_read == -1)
	{
		close(source_fd);
		close(destination_fd);
		print_error_exit(99, "Error: Can't write to ", destination_file);
	}

	if (close(source_fd) == -1)
		print_error_exit(100, "Error: Can't close fd ", source_fd);

	if (close(destination_fd) == -1)
		print_error_exit(100, "Error: Can't close fd ", destination_fd);
}

/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_exit(97, "Usage: cp file_from file_to", "");

	const char *source_file = argv[1];
	const char *destination_file = argv[2];

	copy_file(source_file, destination_file);

	return (0);
}
