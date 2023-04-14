#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: address of old memory location
 * @old_size: size of old memory size
 * @new_size: size of new memory size
 * Return:  pointer to then ew reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
