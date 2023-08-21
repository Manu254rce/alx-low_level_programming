# include "main.h"

/**
 * _strncat - program to concatenate strings with strncat
 * @src: Source string
 * @dest: destination string
 * @n: iterator variable
 * Return: 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}

