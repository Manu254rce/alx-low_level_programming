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
	size_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	read_bytes = fread(buf, sizeof(char), letters, fp);
	if (read_bytes == -1)
		return (0);

	buf[read_bytes] = '\0';

	write_bytes = fwrite(STDOUT_FILENO, buf, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
		return (0);

	fclose(fp);
	free(buf);

	return (write_bytes);
}
