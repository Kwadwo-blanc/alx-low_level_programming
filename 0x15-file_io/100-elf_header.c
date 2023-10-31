#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error_exit - Print an error message and exit with a specified code
 * @message: The error message to print
 * @exit_code: The exit code to use
 */
void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * print_elf_header_info - Display the information from the ELF header
 * @elf_header: The ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr elf_header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");

printf("  Class:                             %s\n",
elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

printf("  Data:                              %s\n",
elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
"2'scomplement, big-endian");

printf("  Version:                           %d (current)\n",
elf_header.e_ident[EI_VERSION]);

printf("  OS/ABI:                            %s\n",
elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
"UNIX - Unknown");

printf("  ABI Version:                       %d\n",
elf_header.e_ident[EI_ABIVERSION]);

printf("  Type:                              %s\n",
elf_header.e_type == ET_REL ? "REL (Relocatable file)" :
elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" :
elf_header.e_type == ET_DYN ? "DYN (Shared object file)" :
elf_header.e_type == ET_CORE ? "CORE (Core file)" :
"Unknown");

printf("  Entry point address:               0x%lx\n",
(unsigned long)elf_header.e_entry);
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: 0 on success, specific exit codes on failure
 */
int main(int argc, char *argv[])
{
ssize_t bytes_read;
Elf64_Ehdr elf_header;
char *elf_filename;
int fd;
if (argc != 2)
{
error_exit("Usage: elf_header elf_filename", 98);
}

elf_filename = argv[1];
fd = open(elf_filename, O_RDONLY);
if (fd == -1)
{
error_exit("Error: Cannot open the file", 98);
}
bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
if (bytes_read != sizeof(Elf64_Ehdr))
{
error_exit("Error: Cannot read the ELF header", 98);
}
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
error_exit("Error: Not an ELF file", 98);
}

print_elf_header_info(elf_header);
close(fd);

return (0);
}
