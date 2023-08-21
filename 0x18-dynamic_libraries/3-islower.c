# include "main.h"
# include <ctype.h>

/**
 * _islower-Function that checks for lowercase letters
 * @c: parameter that will be checked
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

