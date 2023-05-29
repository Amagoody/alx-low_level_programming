#include <stdio.h>
#include "main.h"

/**
 * puts_half - It prints half of a string, followed by a new line.
 * @str: This is the pointer of the string.
 *
 * Return: Null
 */

void puts_half(char *str)
{
	int a;
	int b;

	while (*(str + a) != '\0')
	{
		a++;
	}
	b = 0;
	b = (a % 2) == 0 ? a / 2 : ((a - 1) / 2) + 1;
	for (; *(str + b) != '\0'; b++)
		putchar(*(str + b));

	putchar('\n');
}
