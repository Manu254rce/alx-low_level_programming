# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print hexadecimal values
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= 'f'; ++i)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
