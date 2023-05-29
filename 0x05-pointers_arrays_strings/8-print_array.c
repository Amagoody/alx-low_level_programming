#include <stdio.h>
#include "main.h"

/**
 * print_array - It prints n elements of an integer array,
 * followed by a new line.
 * @a: The pointer to the array.
 * @n: The number of elements to be printed.
 *
 * Return: Null
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != n - 1)
			printf(", ");
	}

	printf("\n");
}

