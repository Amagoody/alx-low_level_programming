#include <stdio.h>

/**
* main - This prints all received arguments.
* @argc: The number of arguments received.
* @argv: array if size argc, containing all arguments received.
*
* Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
