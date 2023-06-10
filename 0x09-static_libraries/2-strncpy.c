#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be copied from src
 *
 * Return: Pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
