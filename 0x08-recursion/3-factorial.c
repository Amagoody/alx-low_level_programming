#include <stdio.h>
#include "main.h"

/**
 * factorial - This is a function that finds the factorial of n
 *
 * @n: The positive number
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
