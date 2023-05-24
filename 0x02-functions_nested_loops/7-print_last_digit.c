#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to print the last_digit
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar((last_digit + '0'));

	return (0);
}
