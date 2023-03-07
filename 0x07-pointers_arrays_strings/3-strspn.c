# include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 * @s: initial segment of first string
 * @accept: accepted bytes of the prefix string
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (j = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}

		if (s[i] != accept[j])
		{
			break;
		}
	}

	return (count);
}
