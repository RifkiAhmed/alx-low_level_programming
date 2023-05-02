#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_tlist
 * @head: head of listint_t list
 * @index: index of node to return
 *
 * Return: node at @index, or "NULL" if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	if (!index)
		return (head);
	ptr = head;
	count = 0;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		count++;
		if (count == index)
			return (ptr);
	}
	return (NULL);
}
