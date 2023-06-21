# include "function_pointers.h"

/**
 * array_iterator - function that executes another function given another array param
 * @array: ptr to an array
 * @size: array sizee
 * @action: func. to be called
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL && action == NULL)
		return;

	for (i = 0; i < size; ++i)
		action(array[i]);
}
