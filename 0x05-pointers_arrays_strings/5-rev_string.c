#include <stdio.h>
#include "main.h"

/**
 * rev_string - It reverses a string.
 * @s: Its a pointer to the string.
 *
 * Return: Null
 */

void rev_string(char *s)
{
	int a;
	int temp;
	int length = 0;

	while (s[length] != '\0')
		length++;
	for (a = 0; a < length / 2; a++)
	{
		temp = s[a];
		s[a] = s[length - a - 1];
		s[length - a - 1] = temp;
	}
}
