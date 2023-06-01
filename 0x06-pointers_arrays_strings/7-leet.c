#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337 (Leet) speak
 * @str: The string to encode
 *
 * Return: Pointer to the modified string
 */

char *leet(char *str)
{
	int count, len;
	char lets[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char current;

	for (len = 0; *(str + len) != '\0'; len++)
	{
		current = *(str + len);
		for (count = 0; count < 10; count++)
		{
			if (current == lets[count])
				*(str + len) = nums[count];
		}
	}


	return (str);
}
