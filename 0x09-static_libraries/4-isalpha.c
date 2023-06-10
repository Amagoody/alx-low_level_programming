#include <stdio.h>
#include "main.h"

/**
 * _isalpha - It checks for alphabetic character.
 * @c: This is the character
 *
 * Return: 1 if the chacter is a letter, o if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
