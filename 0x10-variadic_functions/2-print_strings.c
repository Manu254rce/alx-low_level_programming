# include "variadic_functions.h"

/**
 * print_strings - function that prints string literals
 * @separator: character that works as separator
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list chars;

	va_start(chars, n);

	while (i < n)
	{
		char *str = va_arg(chars, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);

		++i;
	}

	va_end(chars);
	printf("\n");
}
