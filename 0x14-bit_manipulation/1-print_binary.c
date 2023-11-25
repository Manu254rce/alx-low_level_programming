# include "main.h"

/**
 * print_binary - function that prints binary form
 * of a number
 * @n: ineger value
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, j, k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; n >> i; i++)
		;

	for (j = i - 1; j + 1; j--)
	{
		k = n >> j;
		if (k & 1)
			_putchar('1');

		else
			_putchar('0');
	}
}
