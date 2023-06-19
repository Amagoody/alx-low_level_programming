#include <stdio.h>
#include "main.h"

/**
* main - This prints name of file it was compiled from.
*
* Return: always 0 (indicating successful).
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
