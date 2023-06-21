# include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: number of array elements
 * @cmp: func. ptr
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	else
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
