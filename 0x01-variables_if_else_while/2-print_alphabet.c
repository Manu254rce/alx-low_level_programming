# include <stdlib.h>
# include <stdio.h>

/**
 * main - Program to change alphabet chars to lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
