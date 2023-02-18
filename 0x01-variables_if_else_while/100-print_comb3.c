# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print all possible combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; ++i)
	{
		for (j = 48; j < 58; ++j)
		{
			if (i != j && j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
		}
	}

	return (0);
}
