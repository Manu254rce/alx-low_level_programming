# include "main.h"

/**
 * more_numbers - program to print more numbers 10 times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j);
			}
		}

		putchar('\n');
	}
}
