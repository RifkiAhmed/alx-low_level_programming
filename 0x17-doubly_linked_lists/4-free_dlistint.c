#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the  head of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head->next;
	free(head->prev);
	free(head->next);
	while (temp->next)
	{
		head = temp;
		temp = temp->next;
		free(head->next);
		free(head->prev);
	}
	free(temp->prev);
	free(temp->next);
	head = NULL;
	temp = NULL;
}
