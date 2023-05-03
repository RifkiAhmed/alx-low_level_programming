#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node
 * at index index of a listint_t linked list
 * @head: head of listint_t list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *tmp, *current;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
		return (1);
	}

	count = 0;
	while (tmp->next != NULL)
	{
		if (count == (index - 1))
		{
			current->next = tmp->next;
			free(tmp);
			tmp = NULL;
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
