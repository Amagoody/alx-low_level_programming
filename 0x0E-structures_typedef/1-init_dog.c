#include "dog.h"
#include <stdio.h>

/**
* init_dog - This initializes variables of type dog.
* @d: The pointer to variable.
* @name: The pointer to name.
* @age: The age of The dog.
* @owner: The pointer to owner of dog.
*
* Return: NULL.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
