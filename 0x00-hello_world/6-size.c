#include <stdio.h>

/**
 * main - This is the entry point of the program
 *
 * Return: It's always 0 (indicating successful execution)
 */
int main(void)
{
	printf("Size of char: %l byte(s)\n", sizeof(char));
	printf("Size of int: %l byte(s)\n", sizeof(int));
	printf("Size of long int: %l byte(s)\n", sizeof(long int));
	printf("Size of long long int: %l byte(s)\n", sizeof(long long int));
	printf("Size of float: %l byte(s)\n", sizeof(float));
	return (0);
}
