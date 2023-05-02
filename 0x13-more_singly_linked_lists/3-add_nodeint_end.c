#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function adds a new element at the end of listint_t list
 * @head: header of listint_t list
 * @n: number to add
 *
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = *head;
	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;

	if (tmp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (tmp);
}
