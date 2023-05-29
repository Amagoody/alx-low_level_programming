#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - It prints half of a string, followed by a new line.
 * @str: This is the pointer of the string.
 *
 * Return: Null
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int a, b;

	if (length % 2 == 1)
	{
		a = (length - 1) / 2;
		for (b = a; b < length; b++)
		{
			putchar(str[b]);
		}
	}
	else
	{
		for (b = length / 2; b < length; b++)
		{
			putchar(str[b]);
		}
	}

	putchar('\n');
}
