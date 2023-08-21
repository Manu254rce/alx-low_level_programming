# include "main.h"

/**
 *_strchr - program to search for a character in a string
 * @s: string to be searched for
 * @c: character to be searched for
 * Return: 'c'
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	return (0);
}

