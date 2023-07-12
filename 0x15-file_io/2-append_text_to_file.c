# include "main.h"

/**
 * int append_text_to_file - appends text at the EOF
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;

		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
