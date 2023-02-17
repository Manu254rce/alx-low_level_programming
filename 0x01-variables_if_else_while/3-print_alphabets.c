# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(toupper(i));
	}

	putchar('\n');

	return (0);
}
