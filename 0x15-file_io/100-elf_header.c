#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>


#define BUFFER_SIZE 1024

/**
 * open_files - to open a file
 *
 * @file_from: pointer to a file
 * @file_to: pointer to a file
 *
 * Return: Integer.
 */

int open_files(char *file_from, char *file_to)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			 S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (fd_from);
}

/**
 * copy_files - Copies a file to new one
 *
 * @file_from: to represent a file.
 * @file_to: to represent a file.
 *
 * Return: Nothing.
 */

void copy_files(int file_from, int file_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
		exit(98);
	}
}

/**
 * copy_files - Close a file.
 *
 * @file_from: to represent a file.
 * @file_to: to represent a file.
 *
 * Return: Nothing.
 */

void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
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
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	int file_from = open_files(argv[1], argv[2]);
	copy_files(file_from, file_to);
	close_files(file_from, file_to);

	return (0);
}
