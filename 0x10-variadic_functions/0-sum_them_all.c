# include "variadic_functions.h"

/**
 * sum_them_all - program that sums up its parameters
 * @n: number of params
 * Return: integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int val;
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i <= n; ++i)
	{
		if (i == 0)
			sum = 0;

		val = va_arg(nums, int);
		sum += val;
	}

	va_end(nums);

	return (sum);
}
