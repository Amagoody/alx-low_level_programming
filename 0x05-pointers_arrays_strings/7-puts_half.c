#include <stdio.h>
#include "main.h"

/**
 * puts_half - This prints half of a string followed by a new line
 *
 * @str: The string to be printed
 *
 * Return: Null
 */

void puts_half(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = ((length - 1) / 2) + 1;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
