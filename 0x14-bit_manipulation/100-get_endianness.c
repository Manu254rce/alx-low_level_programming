# include "main.h"

/**
 * get_endianness - checks the endianness and returns whether
 * it is little or big
 * Return: 1 if big, 0 if littie
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
