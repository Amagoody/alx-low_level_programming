#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This executes a function given as a
 * parameter on each element of an array.
 * @array: The array being passed.
 * @size: The size of the array.
 * @action: The pointer to the function needed to be used.
 *
 * Return: NULL.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
