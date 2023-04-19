
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements of the array
 * @cmp: pointer to a function
 *
 * Return: index of the 1st first when "cmp function" didn't return 0
 * else return -1 if no element matchs
 * return -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(i))
			return (i);
	}
	return (-1);
}
