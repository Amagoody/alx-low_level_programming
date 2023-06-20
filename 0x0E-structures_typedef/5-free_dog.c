#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_dog - This frees prevoisly allocated memory.
* @d: pointer to struct dog.
*
* Return: NULL.
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
