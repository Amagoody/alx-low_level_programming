#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - This is a function that returns the length of a string
 *
 * @s: This is the string to be printed
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
