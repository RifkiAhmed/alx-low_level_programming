#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Function that searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: is a pointer to the head of the list to search in.
 * @size: is the number of nodes in the list.
 * @value: is the value to search for.
 *
 * Return: return the first node where the value is located;
 * otherwise return NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i = 0, j = 0;
	listint_t *current = list, *position;

	if (!list)
		return (NULL);
	if (list->n == value)
		return (list);

	while (j < size)
	{
		position = current;
		while (current->next && i < step)
		{
			current = current->next;
			i++;
		}
		printf("Value checked at index [%ld] = [%d]\n", i, current->n);
		if (current->n >= value || step >= size)
		{
			if (step >= size)
				step = size - 1;
			printf("Value found between indexes [%ld] and [%ld]\n", j, step);
			while (j <= step)
			{
				printf("Value checked at index [%ld] = [%d]\n", j, position->n);
				if (position->n == value)
					return (position);
				position = position->next;
				j++;
			}
			return (NULL);
		}
		j = step;
		step += sqrt(size);
	}
	return (NULL);
}
