#include "lists.h"

/**
 * dlistint_len -  counts number of elements of a dlistint_t list
 * @h: pointer to the  head of doubly linked list
 *
 * Return: Length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
