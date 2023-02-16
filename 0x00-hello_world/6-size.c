# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print the size of variables
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %u", sizeof(int));
	printf("Size of a long int: %lu", sizeof(long int));
	printf("Size of a long long int: %llu", sizeof(long long int));
	printf("Size of a float: %u", sizeof(float));
	return (0);
}
