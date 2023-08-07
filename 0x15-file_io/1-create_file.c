# include "main.h"

/**
 * create_file - function that cretes a new file and writes to it in POSIX
 * @filename: name of the file to be created
 * @text_content: the text to be written
 * Return: Success
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i, w;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	w = write(fp, text_content, i);

	if (w == -1)
		return (-1);

	close(fp);
	return (1);
}
