#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array. if @min > @max or fails retrun "NULL"
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
