# include "main.h"

/**
 * print_magic - prints the magic number of the elf header
 * @e_ident: the magic number
 * Return: 0 on success, 1 on failure
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);

	printf("\n");
}

/**
 * print_class_data_version - prints the class, data,
 * and version of the elf header
 * @elf_header: the elf header
 * Return: 0 on success, 1 on failure
 */

void print_class_data_version(Elf64_Ehdr *elf_header)
{
	printf("  Class:                             ");
	switch (elf_header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header->e_ident[EI_CLASS]);
	}
	printf("  Data:                              ");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header->e_ident[EI_DATA]);
	}
	printf("  Version:                           ");
	switch (elf_header->e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("none\n");
			break;
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header->e_ident[EI_VERSION]);
	}
}

/**
 * print_os_abi - prints the os abi of the elf header
 * @elf_header: the elf header
 * Return: 0 on success, 1 on failure
 */

void print_os_abi(Elf64_Ehdr *elf_header)
{
	printf("  OS/ABI:                            ");

	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header->e_ident[EI_OSABI]);
	}
}

/**
 * print_elf_header - prints the elf header and the program header
 * @elf_header: the elf header
 * @file: the file
 * Return: 0 on success, 1 on failure
 */

int print_elf_header(Elf64_Ehdr *elf_header, char *file)
{
	int i;

	printf("ELF Header:\n");
	print_magic(elf_header->e_ident);
	print_class_data_version(elf_header);
	print_os_abi(elf_header);

	return (0);
}
