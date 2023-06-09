#include <stdio.h>
#include <stdlib.h>

/**
* main - This prints results of a multiplication
* followed by a new line
* @argc: The number of arguments passed.
* @argv: array of size argc, containing arguments passed.
*
* Return: 0 on success otherwise 1.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	/* Error would be printed and loop terminated */
	 /* if the condition is true */
		printf("Error\n");
		return (1);
	}
	/* if the condition is false */
	/* the product of the 2nd and 3rd command-line arguments */
	 /* would be calculated */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
