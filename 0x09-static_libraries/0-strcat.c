# include "main.h"

/**
 * *_strcat - Program to concatenate 2 strings with strcat
 * @src: First array
 * @dest: Second array
 * Return: ALways 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

