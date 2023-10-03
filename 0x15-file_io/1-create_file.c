#include "main.h"

/**
 * create_file - create a file and write data into it
 * @filename: name of the file to be created
 * @text_content: data to write in the file
 *
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wrcount;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (; text_content[len]; len++)
			;
		wrcount = write(fd, text_content, len);
		if (wrcount == -1)
			return (-1);
	}
	return (1);
}
