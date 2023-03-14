# include "main.h"

/**
 *str_concat - Function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 'strcat' the new concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	char i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; str1[i] != '\0'; ++i)
		;
	for (j = 0; str2[j] != '\0'; j++)
		;

	strcat = (char *) malloc((i * sizeof(char) + (j * sizeof(char))) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (int s1 = 0; s1 < i; s1++)
	{
		strcat[s1] = str1[s1];
	}

	for (int s2 = 0; s2 < j; s1++, s2++)
	{
		strcat[s1] = str2[s2];
	}

	return (strcat);
}

