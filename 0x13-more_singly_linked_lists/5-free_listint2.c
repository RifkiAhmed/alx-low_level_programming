#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head of listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
