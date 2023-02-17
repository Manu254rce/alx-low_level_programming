# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print decimal digits with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '10'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
