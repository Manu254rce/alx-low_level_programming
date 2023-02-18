# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print all possible combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num[2];

	int i;
	int j;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; ++j)
		{
			if (i != j && j != i)
			{
				putchar(num[i]);
				putchar(num[j]);
			}
		}
	}

	return (0);
}
