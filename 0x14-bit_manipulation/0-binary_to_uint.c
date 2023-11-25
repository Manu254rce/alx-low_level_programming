# include "main.h"

/**
 * binary_to_uint - funcion that converts binary number
 * to unsigned int
 * @b: binary digit pointer
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, num;

	if (b == NULL)
		return (0);

	len = strlen(b);
	num = 0;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;
		num += b[i] - '0';
	}

	return (num);
}
