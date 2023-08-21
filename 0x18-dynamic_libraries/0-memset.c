# include "main.h"

/**
 *_memset - Function to print constant bytes in memory
 * @s: pointer to memory area s
 * @b: constant byte
 * @n: number of bytes filled by byte
 * Return: '*s'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; ++i)
	{
		s[i] = b;
	}

	return (s);
}

