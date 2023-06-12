#include "main.h"

/**
 *_strdup - function that returns a duplicate with strdup
 * @str: string to be duplicated
 * Return: Success
 */

char *_strdup(char *str)
{
	int i, j;
	char *str2;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; ++i)
		;

	str2 = (char *)malloc(i * sizeof(char) + 1);

	if (str2 == NULL)
		return (NULL);

	for (j = 0; j < i; ++j)
		str2[j] = str[j];

	str2[j] = '\0';

	return (str2);
}
