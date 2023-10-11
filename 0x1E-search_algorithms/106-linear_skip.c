#include "search_algos.h"

/**
 * linear_skip - Function that searches for a value in
 * a sorted skip list of integers.
 *
 * @list: is a pointer to the head of the skip ist to search in.
 * @value: is the value to search for.
 *
 * Return: return the first node where the value is located;
 * otherwise return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *position;

	if (!list)
		return (NULL);
	if (list->n == value)
		return (list);

	position = list;
	node = list->express;
	while (node)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n >= value)
			break;
		position = node;
		node = node->express;
	}
	if (!node)
	{
		node = position;
		while (node->next)
			node = node->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			position->index, node->index);
	while (position)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				position->index, position->n);
		if (position->n == value)
			return (position);
		position = position->next;
	}
	return (NULL);
}
