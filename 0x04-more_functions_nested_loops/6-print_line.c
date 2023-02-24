# include "main.h"

/**
 * print_line- Program to print a line on the terminal
 * @n: Integer value
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar('_');
		}
		
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
