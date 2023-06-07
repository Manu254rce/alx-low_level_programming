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

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
