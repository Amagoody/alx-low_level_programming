#include <stdio.h>
#include "main.h"

/**
 * _strlen - It returns the length of a string.
 * @s: Its the pointer to the string.
 *
 * Return: Lenght of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
