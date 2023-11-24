# include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to check
 * @index: index to check
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	if (n & mask)
		return (1);

	else
		return (0);
}
