#include "search_algos.h"

/**
 * interpolation_algo - Function that search for an element in the array
 * using Interpolation search algorithm.
 *
 * @array: is a pointer to the first element of the array to print.
 * @low: is the first element in the array
 * @high: is the last element in the array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int interpolation_algo(int *array, size_t low, size_t high, int value)
{
	if (low <= high)
	{
		size_t pos = low + (
				((double)(high - low) /
				 (array[high] - array[low])) * (value - array[low]));
		if (pos <= high)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] > value)
			return (interpolation_algo(array, low, pos - 1, value));
		else if (array[pos] < value)
			return (interpolation_algo(array, pos + 1, high, value));
		return (pos);
	}
	else
	{
		return (-1);
	}
}

/**
 * interpolation_search - Function that searches for a value in an array of
 * integers.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array)
		return (interpolation_algo(array, 0, size - 1, value));
	else
		return (-1);
}
