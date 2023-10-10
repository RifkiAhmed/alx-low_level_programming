#include "search_algos.h"
#include <math.h>

/**
 * print_array - prints an array.
 *
 * @array: is a pointer to the first element of the array to print.
 * @low: is the first element in the array.
 * @high: is the last element in the array.
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		if (low == high)
			printf("%d\n", array[low]);
		else
			printf("%d, ", array[low]);
		low++;
	}
}

/**
 * binary_algorithm - earches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to print.
 * @low: is the first element in the array
 * @high: is the last element in the array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int binary_algorithm(int *array, size_t low, size_t high, int value)
{
	if (low <= high)
	{
		int mid;

		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] > value)
			return (binary_algorithm(array, low, mid - 1, value));
		else if (array[mid] < value)
			return (binary_algorithm(array, mid + 1, high, value));
		return (mid);
	}
	else
	{
		return (-1);
	}
}

/**
 * exponential_search - Function that searches for a value in an array
 * of integers using the Exponential search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t step = 1, pos = 0;

		while (pos < size)
		{
			pos = step;
			if (step > size - 1)
				step = size - 1;
			if (array[step] >= value || step == size - 1)
			{
				pos /= 2;
				printf("Value found between indexes [%ld] and [%ld]\n", pos, step);
				return (binary_algorithm(array, pos, step, value));
			}
			printf("Value checked array[%ld] = [%d]\n", step, array[step]);
			step *= 2;
		}
		return (-1);
	}
	return (-1);
}
