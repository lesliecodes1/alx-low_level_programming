#include "main.h"

/**
 * main - displays info contained in ELF header at the start
 * @argc: argument count
 * @argv: string containing arguments
 * Return: exit success on success,
 * exit 98 otherwise
 */
void error(char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", ehdr->e_ident[EI_VERSION], ehdr->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %s\n", ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : ehdr->e_type == ET_DYN ? "DYN (Shared object file)" : "Other");
    printf("  Entry point address:               0x%lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error("Error: Cannot open file");
	}

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        error("Error: Cannot read ELF header");
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 || ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3) {
        error("Error: Not an ELF file");
    }

    print_elf_header(&ehdr);

    if (close(fd) == -1) {
        fprintf(stderr, "Error: Cannot close file descriptor\n");
        exit(100);
    }

    return 0;
}

