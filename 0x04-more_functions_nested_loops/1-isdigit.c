# include "main.h"

/**
 * _isdigit- Function that checks whether a character is a digit or not
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
