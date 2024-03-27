#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - prints ELF header like readelf -h
 * @filename: pointer to elf file to be read
 *
 * Return: void
 * Author: Gamachu AD
 */
void print_elf_header(const char *filename)
{
	Elf64_Ehdr elf_header;
	int i;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}


	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", filename);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:				 %s\n", elf_header.e_ident[EI_CLASS] ==
	 ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:				 %s\n", elf_header.e_ident[EI_DATA] ==
	 ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
	printf("  Version:				 %d (current)\n",
	 elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:				 %s\n", elf_header.e_ident[EI_OSABI] ==
	 ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:			 %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:				 %d (Executable file)\n", elf_header.e_type);
	printf("  Entry point address:		 0x%lx\n", (unsigned long)elf_header.e_entry);

	close(fd);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	print_elf_header(argv[1]);
	return (0);
}

