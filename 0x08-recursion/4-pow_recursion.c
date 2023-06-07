#include "main.h"

/**
 * _pow_recursion - function that calculates and returns the power of a number
 * @x: base number
 * @y: power/ index number
 * Return: x raised o power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (-1);

	if (y >= 1)
		return (x * pow_recursion(x, y - 1));
	else
		return (1);
}
