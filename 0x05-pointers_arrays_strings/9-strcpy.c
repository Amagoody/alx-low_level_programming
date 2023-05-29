#include <stdio.h>
#include "main.h"

/**
 * _strcpy - It copies a string from src to dest, including the null bytes.
 * @dest: The pointer to the destination buffer.
 * @src: The pointer to the source string.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}
