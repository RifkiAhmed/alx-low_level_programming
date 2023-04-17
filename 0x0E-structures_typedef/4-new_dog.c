#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - prints a struct dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);

	t->name = name;
	if (!t->name)
	{
		free(t);
		return (NULL);
	}
	t->age = age;
	t->owner = owner;
	if (!t->owner)
	{
		free(t->name);
		free(t);
		return (NULL);
	}

	return (t);
}
