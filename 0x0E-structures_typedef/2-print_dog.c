#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to dog type
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (!(strlen(d->name)))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (!(strlen(d->owner)))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
