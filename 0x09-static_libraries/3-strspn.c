#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the substring of acceptable characters.
 *
 * Return: Number of bytes in the initial segment of s consisting only of
 * bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 0;

	while (*s && !found)
	{
		unsigned int a;

		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				length++;
				found = 1;
				break;
			}
		}

		if (!found)
			s++;
	}

	return (length);
}
