#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: head of listint_t list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
