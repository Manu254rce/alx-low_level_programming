# include "main.h"

/**
* *create_array - program to concatenate two strings
* @size: size of string to be used
* @c: string
* Return: Always Success
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *) malloc(size * sizeof(char));

	if (str == NULL)
	{
		return ('\0');
	}

	for (i = 0; i != '\0'; ++i)
	{
		*(str + i) = c;
	}

	*(str + i) = NULL;

	return (str);
}
