#include "main.h"

/**
 * main- program that prints all arguments assigned to it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; ++count)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
