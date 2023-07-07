# include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from ine number tto another
 * one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j, k = 0;

	for (i = 0; i < 64; i++)
	{
		j = (n >> i) & 1;
		k += (j ^ ((m >> i) & 1));
	}
			return (k);
}
