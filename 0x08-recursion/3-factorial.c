# include "main.h"

/**
 * factorial - function taht returns the factorial of a number
 * @n: integer to find the factorial
 * Return: Always 0
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
