# include "main.h"

/**
 * _print_rev_recursion - program to print a string inreverse
 * @s: string to be printed out
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{

	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		break;
	}
}
