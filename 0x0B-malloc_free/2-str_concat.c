#include "main.h"

/**
 *str_concat - program to concatenate two strings
 * @s1: first character string
 * @s2: second character string
 * Return: Always Success
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int i, j, c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; ++i)
		;

	for (j = 0; s2[j] != '\0'; ++j)
		;

	strcat = (char *) malloc((i * sizeof(char)) + (j * sizeof(char)));

	if (strcat == NULL)
		return (NULL);

	for (c1 = 0; c1 < i; ++c1)
		strcat[c1] = s1[c1];

	for (c2 = 0; c2 < j ; c1++, c2++)
		strcat[c1] = s2[c2];

	return (strcat);
}
