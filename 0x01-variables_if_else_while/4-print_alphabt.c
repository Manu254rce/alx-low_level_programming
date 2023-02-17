# include <stdio.h>
# include <stdlib.h>

/**
 * main - Program to print all lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}

		else
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
