#include <stdio.h>
#include "main.h"

/**
 * int _islower - it checks for lowerces character.
 *
 * Return: Always 0 (indicating successful)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
