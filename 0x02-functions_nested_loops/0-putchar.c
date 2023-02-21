# include <stdio.h>
# include <stdlib.h>

/**
 * main- program that outputs putchar
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0, i <= 8, i++)
	{
		putchar('_');
		putchar('p');
		putchar('u');
		putchar('t');
		putchar('c');
		putchar('h');
		putchar('a');
		putchar('r');
	}
	
	putchar('\n');

	return (0);
}
