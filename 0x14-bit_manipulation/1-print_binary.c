# include "main.h"

/**
 * print_binary - function that prints binary form
 * of a number
 * @n: ineger value
 * Return: binary value of he number
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;

	int lead = 1;
	int i, bit;

	for (i = size - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit || !leadingZeros)
		{
			putchar(bit ? '1' : '0');
			lead = 0;
		}
	}

	if (leadingZeros)
		putchar('0');
}
