#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - "dog" data type
 * @name: pointer to the name of dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 */

type def struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
