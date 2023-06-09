#include "main.h"

/**
 * main- program that muliplies arguments assigned to it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
