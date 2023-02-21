# include "main.h"

/**
 * print_to_98-Function to print to 98 from any starting number
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;
	int j;

	while ( i = n; i <= '9'; i++ )
	{
		for (j = n; j <= '8'; j++ )
		{
			_putchar(i);
			_putchar(j);

			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
