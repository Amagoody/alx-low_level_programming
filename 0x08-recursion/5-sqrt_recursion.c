#include <stdio.h>
#include "main.h"

/**
 * search - This checks for the square root
 *
 * @x: This is the integer x
 * @y: This is the integer y
 *
 * Return: integer
 */

int search(int x, int y)
{
	if (x * x == y)
		return (x);

	if (x * x > y)
		return (-1);

	return (search(x + 1, y));
}

/**
 * _sqrt_recursion - This returns the square root of a number
 *
 * @n: The integer to find sqrt of
 *
 * Return: The square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);

	return (search(1, n));
}
