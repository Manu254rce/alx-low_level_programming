# include "main.h"

/**
 * reverse_array - program to reverse arrays
 * @a: pointer variable
 * @n: iterator
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); ++i)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
