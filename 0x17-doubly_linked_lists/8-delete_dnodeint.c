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
	dlistint_t *prev, *current;
	int nth;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (*head->next)
		{
			current = (*head)->next;
			free(*head);
			*head = cuurent;
		}
		else
		{
			free(*head);
		}
		return (1);
	}
	prev = *head;
	current = *head->next;
	nth++;
	while (current)
	{
		if (index == nth)
		{
			if (current->next == NULL)
			{
				prev->next = NULL;
				free(current);
				return (1);
			}
			current->next->prev = prev;
			prev->next = current->next;
			free(current);
			return (1);
		}
	}
	return (-1);
}
