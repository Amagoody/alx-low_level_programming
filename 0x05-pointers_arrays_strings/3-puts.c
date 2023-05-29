#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _puts - It prints a string followed by a new line to stdout.
 * @str: Tis is a pointer to string.
 *
 * Return: null
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}

	write(1, "\n", 1);
}
