# include <stdlib.h>
# include <stdio.h>

/**
 * main - Program to change alphabet chars to lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		printf("%c", i);
	}

	putchar("\n");

	return (0);
}
