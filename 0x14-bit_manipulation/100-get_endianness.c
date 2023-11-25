# include "main.h"

/**
 * get_endianess - checks the endianness and returns whether 
 * it is little or big
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
