#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_check(n, 1));
}

/**
 * sqrt_check - checks for the square root of c
 * @c: number o find sqrt
 * @i: iterator
 * Return: square root of c
 */

int sqrt_check(int c, int i)
{
	if (c == i * i)
		return (i);
	if (c < i * i)
		return (-1);
	return (sqrt_check(c, i + 1));
}
