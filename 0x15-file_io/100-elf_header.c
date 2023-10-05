#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_magic - print the magic number of an elf file header
 * @e_ident: array containing elf id
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * print_class - print the class of an elf file
 * @e_ident: array containing elf id
 */
void print_class(unsigned char *e_ident)
{
	int e_class = e_ident[EI_CLASS];
	const char *class[] = {
		"none",
		"ELF32",
		"ELF64"
	};
	printf("  Class:                             ");
	if (e_class >= ELFCLASSNONE && e_class <= ELFCLASS64)
		printf("%s\n", class[e_class]);
	else
		printf("<Unknown: %02x>\n", e_class);
}

/**
 * print_data - print endianess of an elf file
 * @e_ident: array containing elf id
 */
void print_data(unsigned char *e_ident)
{
	int e_data = e_ident[EI_DATA];
	const char *data[] = {
		"none",
		"2's complement, little endian",
		"2's complement, big endian"
	};
	printf("  Data:                              ");
	if (e_data >= ELFDATANONE && e_data <= ELFDATA2MSB)
		printf("%s\n", data[e_data]);
	else
		printf("<Unknown: %02x>\n", (unsigned int)e_data);
}

/**
 * print_vers - print the version of elf
 * @version: the version
 */
void print_vers(unsigned int version)
{
	printf("  Version:                           ");
	if ((int)version == EV_NONE)
		printf("0 (none)\n");
	else if ((int)version >= 1)
		printf("1 (current)\n");
	else
		printf("<Unknown>\n");
}

/**
 * print_os_abi - print os/abi info of an elf file
 * @e_ident: array of characters
 */
void print_os_abi(unsigned char *e_ident)
{
	int osabi = e_ident[EI_OSABI], i = 0;
	const char *meaning = NULL;
	int cmp_osabi[] = {
		ELFOSABI_NONE, ELFOSABI_HPUX, ELFOSABI_NETBSD, ELFOSABI_GNU,
		ELFOSABI_LINUX, ELFOSABI_SOLARIS, ELFOSABI_AIX, ELFOSABI_IRIX,
		ELFOSABI_FREEBSD, ELFOSABI_TRU64, ELFOSABI_MODESTO, ELFOSABI_OPENBSD,
		ELFOSABI_ARM, ELFOSABI_STANDALONE, 6, 187
	};
	const char *cmp_osabi_str[] = {
		"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD", "UNIX - GNU",
		"UNIX - Linux", "UNIX - Solaris", "UNIX - AIX", "UNIX - IRIX",
		"UNIX - FreeBSD", "UNIX - TRU64", "UNIX - MODESTO", "UNIX - OPENBSD",
		"ARM", "Standalone App", "SPARC", "Sortix"
	};

	while ((size_t)i < sizeof(cmp_osabi) / sizeof(cmp_osabi[0]))
	{
		if (cmp_osabi[i] == osabi)
		{
			meaning = cmp_osabi_str[i];
			break;
		}
		i++;
	}
	printf("  OS/ABI:                            ");
	if (meaning)
		printf("%s\n", meaning);
	else
		printf("<Unknown: %02x\n", osabi);
}

/**
 * print_abi - print the abi version of an elf file
 * @e_ident: array containing info
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print the type of an elf file
 * @e_type: value of e_type field
 * @endianness: how bytes are was stored in the field
 */
void print_type(unsigned int e_type, int endianness)
{
	const char *type[] = {
		"NONE (None)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};

	if (endianness == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	if (((int)e_type >= ET_NONE) && ((int)e_type <= ET_CORE))
		printf("%s\n", type[e_type]);
	else
		printf("<Unknown: %02x\n", e_type);
}

/**
 * print_entry - print the entry address
 * @e_entry: entry address
 * @e_ident: array of characters
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = __builtin_bswap32(e_entry);
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * print_elf_header_infos - print infos in a elf file header
 * @ehdr: the header
 * @is64bit: 1 if 64bit else 0
 */
void print_elf_header_infos(void *ehdr, int is64bit)
{
	Elf64_Ehdr *ehdr64 = NULL;
	Elf32_Ehdr *ehdr32 = NULL;

	printf("ELF Header:\n");
	if (is64bit)
	{
		ehdr64 = (Elf64_Ehdr *)ehdr;
		print_magic(ehdr64->e_ident);
		print_class(ehdr64->e_ident);
		print_data(ehdr64->e_ident);
		print_vers(ehdr64->e_version);
		print_os_abi(ehdr64->e_ident);
		print_abi(ehdr64->e_ident);
		print_type(ehdr64->e_type, ehdr64->e_ident[EI_DATA]);
		print_entry(ehdr64->e_entry, ehdr64->e_ident);
	}
	else
	{
		ehdr32 = (Elf32_Ehdr *)ehdr;
		print_magic(ehdr32->e_ident);
		print_class(ehdr32->e_ident);
		print_data(ehdr32->e_ident);
		print_vers(ehdr32->e_version);
		print_os_abi(ehdr32->e_ident);
		print_abi(ehdr32->e_ident);
		print_type(ehdr32->e_type, ehdr32->e_ident[EI_DATA]);
		print_entry(ehdr32->e_entry, ehdr32->e_ident);
	}
}

/**
 * is_elf64bit - check if a file is a elf file
 * @fd: file descriptor
 * @file: file name
 *
 * Return: 1 if file is a 64bit elf, else 0
 */
int is_elf64bit(int fd, const char *file)
{
	int i;
	unsigned char elfid[EI_NIDENT];

	if (read(fd, elfid, EI_NIDENT) != EI_NIDENT)
	{
		dprintf(STDERR_FILENO, "error reading elf id from %s\n", file);
		close(fd);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);

	for (i = 0; i < SELFMAG; i++)
	{
		if (elfid[i] != ELFMAG[i])
		{
			dprintf(STDERR_FILENO, "Error: %s is not an elf file\n", file);
			close(fd);
			exit(98);
		}
	}
	return (elfid[EI_CLASS] == ELFCLASS64);
}

/**
 * read_eheader - read header info of an elf file
 * @fd: file descriptor
 * @elf_file: file name
 * @ehdr: address to store the read info
 *
 * Return: 1 if file is a 64bit elf, else 0
 */
int read_eheader(int fd, const char *elf_file, void **ehdr)
{
	size_t size;
	int is64bit;

	is64bit = is_elf64bit(fd, elf_file);
	if (is64bit)
		size = sizeof(Elf64_Ehdr);
	else
		size = sizeof(Elf32_Ehdr);
	*ehdr = malloc(size);
	if (!(*ehdr))
	{
		dprintf(STDERR_FILENO, "Error: can't read elf header\n");
		close(fd);
		free(*ehdr);
		exit(98);
	}
	if (read(fd, *ehdr, size) != (ssize_t)size)
	{
		dprintf(STDERR_FILENO, "Error: can't read elf header from %s\n", elf_file);
		close(fd);
		free(*ehdr);
		exit(98);
	}
	return (is64bit);
}

/**
 * main - print some header info of an elf file
 * @ac: argument count
 * @av: list of argument
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	const char *elf_file;
	void *ehdr = NULL;
	int fd, is64bit;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_file\n", av[0]);
		exit(98);
	}
	elf_file = av[1];
	fd = open(elf_file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not open %s\n", elf_file);
		exit(98);
	}
	is64bit = read_eheader(fd, elf_file, &ehdr);
	print_elf_header_infos(ehdr, is64bit);
	free(ehdr);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error closing %s\n", elf_file);
		exit(98);
	}
	return (0);
}
