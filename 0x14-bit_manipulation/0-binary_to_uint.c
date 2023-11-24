# include "main.h"

/**
 * binary_to_uint - funcion that converts binary number
 * to unsigned int
 * @b: binary digit pointer
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int res, len;
	int i;

	if (b == NULL)
		return (0);

	res = 0;

	len = strlen(b);

	for (i = 0; i < len; ++i)
	{
		if (b[i] == '1')
			res = (res << 1) | 1;

		else if (b[i] == '0')
			res = (res << 1);

		else
			return (0);
	}

	return (res);
}
