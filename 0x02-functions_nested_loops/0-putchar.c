# include "main.h"

/**
 * main- program that outputs putchar
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int c[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}

	putchar('\n');

	return (0);
}
