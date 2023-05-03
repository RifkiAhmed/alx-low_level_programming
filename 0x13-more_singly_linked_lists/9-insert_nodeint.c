#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts an element of a linked list
 * at a given position* @idx: index of element to insert
 * @head: head of linked list
 * @n: data of type integer to insert
 *
 * Return: address of the new node or "NULL" if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}

	tmp = *head;
	count = 0;
	while (tmp->next != NULL)
	{
		if (count == (idx - 1))
		{
			ptr->next = tmp->next;
			tmp->next = ptr;
			return (ptr);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
