# include "main.h"
# include <ctype.h>

/**
 * _islower-Function that checks for lowercase letters
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int c;

	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
