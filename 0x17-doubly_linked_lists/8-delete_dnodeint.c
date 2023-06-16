#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index in dlistint_t list
 * @head: pointer to the  head of doubly linked list
 * @index: index of node to return
 *
 * Return: 1 or -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *next;
	unsigned int nth = 0;

	if (*head == NULL)
		return (-1);
	prev = *head;
	next = (*head)->next;
	nth++;
	while (next)
	{
		if (index == 0)
		{
			free(*head);
			*head = next;
			return (1);
		}
		if (index == nth)
		{
			if (next->next == NULL)
				prev->next = NULL;
			else
			{
				prev->next = next->next;
				next->next->prev = prev;
			}
			free(next);
			return (1);
		}
		prev = next;
		next = next->next;
		nth++;
	}
	return (-1);
}
