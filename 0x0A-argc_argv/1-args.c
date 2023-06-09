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

	for (count = 0; count < argc - 1; ++count)
		;
	printf("%d\n", count);

	return (0);
}
