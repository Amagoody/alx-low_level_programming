#include <stdio.h>
#include "main.h"

/**
 * swap_int - This swaps the values of both integers.
 * @a: Its a pointer to the first integer.
 * @b: Its a pointer to the second integer.
 *
 * Return: Null
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
