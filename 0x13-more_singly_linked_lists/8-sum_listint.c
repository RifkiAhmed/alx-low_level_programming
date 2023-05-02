#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: head of listint_t list
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;
	sum = 0;
	while (ptr->next != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	sum += ptr->n;

	return (sum);
}
