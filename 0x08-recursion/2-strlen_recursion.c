# include "main.h"

/**
 * _strlen_recursion - program that prints length of string
 * @s: The string to get its length
 * Return: 'count' length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}

	return (count);
}
