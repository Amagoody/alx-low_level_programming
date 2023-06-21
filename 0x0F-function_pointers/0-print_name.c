#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This prints a name
 * @name: The name string.
 * @f: The pointer to function.
 *
 * Return: NULL.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
