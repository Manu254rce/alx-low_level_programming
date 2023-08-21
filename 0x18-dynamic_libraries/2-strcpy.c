# include "main.h"

/**
 * _strncpy - program to copy string
 * @src: source string
 * @dest: destination string
 * @n: number of chars to copy
 * Return: 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; n > i; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

