#include "main.h"

/**
 * main- program that add two integer arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc < 1)
		printf("0\n");

	for (num1 = 1 ; num1 < argc ; num1++)
	{
		for (num2 = 0 ; argv[num1][num2] != '\0' ; num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num1]);
	}

	printf("%d\n", sum);

	return (0);
}
