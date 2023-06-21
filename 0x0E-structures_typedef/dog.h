#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - information about dogs.
* @name: name of dog.
* @age: The age of dog.
* @owner: The owner of dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t -typedef for struct dog
*/

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif