# include "main.h"

/**
 * main - program that printss opcodes of its main func.
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; ++i)
	{
		printf("%02hhx", ptr[i]);

		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

