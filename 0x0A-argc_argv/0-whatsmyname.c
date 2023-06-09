#include "main.h"
#include <stdio.h>

/**
  *main - This prints the  name of this program.
  *@argc: counts number of arguemnts paased in th command line.
  *@argv: This stores arguments passed in the command line.
  *
  *Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
