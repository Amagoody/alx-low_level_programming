#include <stdio.h>

/**
 * main - This is entry point of the program
 * Prints all possible different combination of two digits
 *
 * Return: Always 0 (indicating successful)
 */

int main(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = k + 1; l <10; l++)
		{
			if (k != l)
			{
				putchar(k + '0');
				putchar(l + '0');
				putchar(',');
				putchar(' ');
				putchar('\n');
			}
		}
	}

	return (0);
}
