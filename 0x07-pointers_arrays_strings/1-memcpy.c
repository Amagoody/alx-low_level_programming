#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest.
 * @dest: The pointer to the destination memory area.
 * @src: The pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: Pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
