#include "main.h"

/**
 * prime_check - checks if n is divisible by i
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */

int prime_check(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (prime_check(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
