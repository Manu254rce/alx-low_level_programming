# include "main.h"

/**
 * print_most_numbers- Program to print all numbers except 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c++;
	}

	_putchar('\n');
}
