#include <stdio.h>
#include "main.h"

/**
 * _atoi - It converts a string to an integer.
 * @s: The pointer to the string.
 *
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int started = 0;
	int result = 0;
	int digit;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (result == 0)
				started = 1;

			result = result * 10 + digit;
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return (result * sign);
}
