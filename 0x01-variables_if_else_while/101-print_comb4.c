#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints all possible different combination of three digits.
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
	int m, n, o;

	m = 0;
	n = 1;
	o = 2;

	while (m <= 8)
	{
		while (n <= 9)
		{
			while (o <= 10)
			{
				if ((m != n) && (n != o) && (m != o))
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
				}
				if (m != 8)
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			n++;
			o = n + 1;
		}
		n = m + 1;
		m++;
	}
	putchar('\n');

	return (0);
}
