#include <stdio.h>
#include "main.h"

/**
 * puts2 - It prnts every other character of a string,
 * starting with the first character. followed by a new line.
 * @str: Its the pointer to the string.
 *
 * Return: Null
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			putchar(str[a]);
		a++;
	}

	putchar ('\n');
}
