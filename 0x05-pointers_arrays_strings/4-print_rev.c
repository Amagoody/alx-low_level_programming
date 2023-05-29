#include <stdio.h>
#include "main.h"

/**
 * print_rev - This prints a string in reverse followed by a new line.
 * @s: The pointer to the string.
 *
 * Return: Null
 */

void print_rev(char *s)
{
	int length = 0;
	int a;

	while (s[length] != '\0')
		length++;

	for (a = length - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}

	putchar('\n');
}
