#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - This searches for an integer.
 * @array: The array passed.
 *
 * @size: The size of array.
 * @cmp: The callback function.
 *
 * Return: The index of the first element for which the cmp
 * function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, res;

	if (array && size > 0 && cmp)
	{
		for (a = 0; a < size; a++)
		{
			res = cmp(array[a]);
			if (res != 0)
				return (a);
		}
	}
	return (-1);
}
