#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that searches for a value in an array of integers
 * using the Jump search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t step = sqrt(size), pos = 0, i;

		while (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[step] >= value || step > size - 1)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", pos, step);
				if (step > size - 1)
					step = size - 1;
				for (i = pos; i <= step; i++)
				{
					printf("Value checked array[%ld] = [%d]\n", i, array[i]);
					if (array[i] == value)
						return (i);
				}
				return (-1);
			}
			pos = step;
			step += sqrt(size);

		}
		return (-1);
	}
	return (-1);
}
