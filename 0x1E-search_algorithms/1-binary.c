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
 * binary_serach_algo - Function that search for an element in the array
 * to search in.
 *
 * @array: is a pointer to the first element of the array to print.
 * @low: is the first element in the array
 * @high: is the last element in the array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int binary_serach_algo(int *array, size_t low, size_t high, int value)
{
	if (low <= high)
	{
		int mid;

		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] > value)
			return (binary_serach_algo(array, low, mid - 1, value));
		else if (array[mid] < value)
			return (binary_serach_algo(array, mid + 1, high, value));
		return (mid);
	}
	else
	{
		return (-1);
	}
}

/**
 * binary_search - Function that searches for a value in an array of integers.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 *
 * Return: return the first index where value is located; otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (binary_serach_algo(array, 0, size - 1, value));
	else
		return (-1);
}
