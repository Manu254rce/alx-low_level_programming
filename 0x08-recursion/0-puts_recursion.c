# include "main.h"

/**
 * _puts_recursion - program to print out a string with recursion
 * @s: set of characters to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
