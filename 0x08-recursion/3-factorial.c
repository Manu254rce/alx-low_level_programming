# include "main.h"

/**
 * factorial - returns factorial of an integer
 * @n: integer value
 * Return: Success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
