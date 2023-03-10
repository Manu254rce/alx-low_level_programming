# include "main.h"

/**
 * _pow_recursion - program that exponentially increases x by y
 * @x: the base
 * @y: the index
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	power = x * (_pow_recursion(x, y - 1));

	return (power);
}
