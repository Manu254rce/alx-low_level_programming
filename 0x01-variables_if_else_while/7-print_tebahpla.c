# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print lowercase alphabet in reverse order
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
