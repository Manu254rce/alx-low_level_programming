# include "main.h"

/**
 * *_strncat - program to concatenate strings with strncat
 * @src: Source string
 * @dest: destination string
 * @n: iterator variable
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; i++, n--, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
