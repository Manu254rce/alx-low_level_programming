# include "main.h"

/**
 * _strcmp - Program to compare two srtings
 * @s1: string1
 * @s2: string2
 * Return: 'diff'
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; ++i)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
	}

	return (0);
}
