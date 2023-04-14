#include <stdio.h>
#include <stdlib.h>


/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of byte to reserve
 *
 * Return: pointer, if failed termination of with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
