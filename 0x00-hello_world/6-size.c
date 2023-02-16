# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print the size of variables
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d\n byte(s)", sizeof(char));
	printf("Size of an int: %u\n byte(s)", sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %u\n byte(s)", sizeof(long long int));
	printf("Size of a float: %u\n byte(s)", sizeof(float));
	return (0);
}
