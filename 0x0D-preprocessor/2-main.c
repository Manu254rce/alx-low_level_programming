# include <stdio.h>
# include <stdlib.h>

# include "main.h"

/**
 * main - Program that uses the FILE macro to print the file
 * it was compiled from
 * @argc: first argument
 * @argv: second argument
 * Return: Success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", __FILE__);

	return (0);
}
