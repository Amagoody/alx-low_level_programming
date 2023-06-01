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
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str -= (length + 1) / 2;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
