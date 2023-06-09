#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - This is a function that returns the power of @x by @y (x^y)
 *
 * @x: This is the integer x
 * @y: This is the integer y
 *
 *  Return: The power of @x by @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	else
	{
		return (1);
	}
}
