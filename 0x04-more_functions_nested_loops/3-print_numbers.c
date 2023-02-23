# include "main.h"

/**
 * print_numbers - Program to print integers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);

		i += 1;
	}

	_putchar('\n');
}
