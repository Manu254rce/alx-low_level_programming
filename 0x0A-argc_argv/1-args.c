#include "main.h"

/**
 * main- program that prints all arguments assigned to it
 * @argc: Argument count
 * @argv: Argument vecors
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; ++count)
		{
			printf("%d\n", count);
		}
	}

	return (0);
}
