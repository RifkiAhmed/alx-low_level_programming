#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with @c char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array or "NULL" if it fails or size equals 0
 */




char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return ("NULL\n");
	array = malloc(size);
	if (array == NULL)
	{
		return ("NULL\n");
	}
	else
	{
		array[0] = c;
		return (array);
	}
}
