# include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_bytes, write_bytes;
	int fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);

	read_bytes = read(fp, buffer, letters);
	if (read_bytes == -1)
		return (0);

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
		return (0);

	close(fp);
	free(buffer);

	return (write_bytes);
}
