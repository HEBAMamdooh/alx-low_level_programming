#ifndef ELF_H
#define ELF_H

#define EI_NIDENT 16
#define EI_DATA 5
#define ELFDATA2MSB 2
#define EI_CLASS 4
#define ELFCLASS32 1
#define ELFCLASS64 2
#define EI_OSABI 7
#define ELFOSABI_NETBSD 2
#define ELFOSABI_SOLARIS 6
#define ELFOSABI_SORTIX 9

typedef struct
{
    unsigned char e_ident[EI_NIDENT];
} Elf32_Ehdr;

typedef struct
{
    unsigned char e_ident[EI_NIDENT];
} Elf64_Ehdr;

#define BUFFER_SIZE 1024

#endif /* ELF_H */