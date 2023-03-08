# include "main.h"

/**
 * _pow_recursion - program that exponentially increases x by y
 * @x: the base
 * @y: the index
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	return (_pow_recursion(x**y));
}
