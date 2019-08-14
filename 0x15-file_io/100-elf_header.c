#include <elf.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_error - function that exits the program
 * @argv: argument
 * Return: void
 */

void read_error(char *argv)
{
	printf("Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * check_elf - function that checks the format of the file, prints magic num
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_elf(Elf64_Ehdr *header)
{
	int i = 0;

	if (header->e_ident[EI_MAG0] == 0x7f &&
	header->e_ident[EI_MAG1] == 'E' &&
	header->e_ident[EI_MAG2] == 'L' &&
	header->e_ident[EI_MAG3] == 'F')
	{
	printf("ELF Header:\n");
	printf("  Magic:  ");

	for (i = 0; i < 16; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");
	}
	else
	{
		printf("Format error, not an ELF\n");
		exit(98);
	}
}


/**
 * main - program that prints ELF header formated
 * @argc: number of arguments passed to the program
 * @argv: string containing of the program and the ELF file
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd64, read_char = 1;
	Elf64_Ehdr *header, size;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}

	header = malloc(sizeof(size));

	if (!header)
		exit(98);

	fd64 = open(argv[1], O_RDONLY);

	if (fd64 < 0)
		read_error(argv[1]);

	read_char = read(fd64, header, sizeof(size));

	if (read_char < 0)
		read_error(argv[1]);
	check_elf(header);

	free(header);
	close(fd64);
	return (0);
}
