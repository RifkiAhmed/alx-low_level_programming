#include "search_algos.h"

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
 * binary_algorithm - Function that search for an element in the array
 * to search in.
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
		size_t mid;

		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] > value)
			return (binary_algorithm(array, low, mid, value));
		else if (array[mid] < value)
			return (binary_algorithm(array, mid + 1, high, value));
		if (array[mid - 1] == value)
			return (binary_algorithm(array, low, mid, value));
		return (mid);
	}
	else
	{
		return (-1);
	}
}

/**
 * advanced_binary - Function that searches for a value in an array of integers
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (binary_algorithm(array, 0, size - 1, value));
	return (-1);
}
