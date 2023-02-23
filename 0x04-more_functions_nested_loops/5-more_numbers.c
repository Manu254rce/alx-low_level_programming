# include "main.h"

/**
 * more_numbers - program to print more numbers 10 times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			_putchar(j + '0');
		}
	}

	_putchar('\n');
}
