#include "main.h"

/**
 * read_textfile - reads a text from a file and prints it on stdout
 * @filename: the name of the file containing the text
 * @letters: the number of characters it should read and print from the file
 *
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rdcount;
	ssize_t wrcount;
	char *buff = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters + 1);
	if (!buff)
	{
		close(fd);
		return (0);
	}
	rdcount = read(fd, buff, letters);
	close(fd);
	if (rdcount == -1)
	{
		free(buff);
		return (0);
	}
	buff[rdcount] = '\0';
	wrcount = write(STDOUT_FILENO, buff, (size_t)rdcount);
	free(buff);
	if ((wrcount == -1) || (rdcount != wrcount))
		return (0);
	return (wrcount);
}
