# include "main.h"

/**
 *_strdup - Function that returns a duplicate
 * @str: string to be duplicated
 * Return: Success
 */

char *_strdup(char *str)
{
	int n, j;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n] < '\0'; ++n)
		;

	str2 = malloc(n * sizeof(str2));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < n; ++j)
	{
		str2[j] = str[j];
	}

	str2[j] = '\0';

	return (str2);
}
