#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include "elf.h"

/**
 * print_error - handle error massages
 *
 * @message: pointer to error text
 *
 * Return: Nothing.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header -handle error casses
 *
 * @header: to represent a header.
 *
 * Return: Nothing.
 */
void print_elf_header(const Elf32_Ehdr *header)
{
	printf("Magic:   %02x %02x %02x %02x\n", header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);
	printf("Class:   %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", header->e_type);
	printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
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
	if (argc != 2)
		print_error("Invalid number of arguments. Usage: elf_header elf_filename");

	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	Elf32_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Failed to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}

	print_elf_header(&header);

	close(fd);

	return (0);
}
