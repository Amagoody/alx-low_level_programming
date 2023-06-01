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
	int k, l;
	char leet_chars[] = "43071";
	char normal_chars[] = "aeotlAEOTL";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (l = 0; normal_chars[l] != '\0'; l++)
		{
			if (str[k] == normal_chars[l])
			{
				str[k] = leet_chars[l];
				break;
			}
		}
	}

	return (str);
}
