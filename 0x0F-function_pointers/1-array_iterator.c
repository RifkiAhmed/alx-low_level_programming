/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array of integers
 * @size: number of elements of the array
 * @action: pointer to a function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
