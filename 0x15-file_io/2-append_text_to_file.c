# include "main.h"

/**
 * append_text_to_file - function that appends text to EOF
 * @filename: file name/ path of file
 * @text_content: content to be appended
 * Return: Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		write(fp, text_content, len);
	}

	close(fp);
	return (1);
}
