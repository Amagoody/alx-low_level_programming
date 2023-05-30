#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - It converts a string to an integer.
 * @s: The pointer to the string.
 *
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int a = 0;
	int result = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		a++;
	}

	for (; s[a] != '\0'; a++)
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			int digit = s[a] - '0';

			if (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + digit;
		}
		else
		{
			break;
		}
	}

	return (sign * result);
}
