# include "main.h"

/**
 * print_to_98-Function to print to 98 from any starting number
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i = n;
	int j;

	while (i <= 57)
	{
		for (j = n; j <= 56; j++ )
		{
			_putchar(i);
			_putchar(j);

			if (i < 57 && j < 56)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		i ++;
	}

	_putchar ('\n');
}
