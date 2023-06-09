#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - This creates an array of characters and
* initializes it with a specific char.
* @size: The size of array.
* @c: The char to initialize array with.
*
* Return: Pointer to array or
* NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
