#include "main.h"

/**
 * copy - helper function to main
 * @fd_from: file descriptor for source file
 * @fd_to: file descriptor for destination file
 * @file_from: source file to copy text
 * @file_to: destination file to write text
 */
void copy(int fd_from, int fd_to, const char *file_from, const char *file_to)
{
	ssize_t rdcount = 1, wrcount, xerr;
	char buff[1024] = {0};

	while ((rdcount = read(fd_from, buff, sizeof(buff))))
	{
		if (rdcount == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		wrcount = write(fd_to, buff, rdcount);
		if ((wrcount == -1) || (wrcount != rdcount))
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	xerr = close(fd_from);
	if (xerr)
	{
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	xerr = close(fd_to);
	if (xerr)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - copy text from a file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	copy(fd_from, fd_to, av[1], av[2]);
	return (0);
}
