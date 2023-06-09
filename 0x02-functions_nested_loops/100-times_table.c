#include "main.h"
#include <stdio.h>

/**
 * times_table - This prints time table of n
 *
 * @n: This takes number input
 * 
 * Description: This function prints the times table for a given number.
 * It prints the multiplication table from 1 to 100 for the given number `n`.
 * Each line represents the multiplication of `n` with the numbers from 1 to 100.
 */

void print_times_table(int n)
{
	int num, multi, prod;

	if (n >= 0 && n <= 15)
	{
		num = 0;
		while (num <= n)
		{
			_putchar('0');

			multi = 1;
			while (multi <= n)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * multi;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				multi++;
				_putchar((prod % 10) + '0');
			}
			num++;
			_putchar('\n');
		}
	}
}
