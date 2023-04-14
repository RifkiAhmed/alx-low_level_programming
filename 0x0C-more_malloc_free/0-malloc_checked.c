#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of byte to reserve
 *
 * Return: pointer, if failed termination of with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	else
		return (malloc(b));
}
