#include "main.h"

/**
 * append_text_to_file - append text data at the end of a file
 * @filename: name of the file
 * @text_content: the text data to write to the end of the file
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wrcount;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (; text_content[len]; len++)
			;
		wrcount = write(fd, text_content, len);
		if ((wrcount == -1) || (wrcount != len))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

