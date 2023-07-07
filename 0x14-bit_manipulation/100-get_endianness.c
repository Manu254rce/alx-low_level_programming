# include "main.h"

/**
 * get_endianness - function that checks for big or little endian
 * Return: Success
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	if (*c)
		return (1);
	else
		return (0);
}
