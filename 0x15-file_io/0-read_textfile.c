# include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 if the file can not be opened or read, 0 if filename is NULL,
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t read_bytes, write_bytes;
	int fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	read_bytes = read(fp, buf, letters);
	if (read_bytes == -1)
		return (0);

	write_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
		return (0);

	close(fp);
	free(buf);

	return (write_bytes);
}
