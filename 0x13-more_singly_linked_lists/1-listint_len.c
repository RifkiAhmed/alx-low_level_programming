#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that returns numbers of elements in a listint_t list
 * @h: header of listint_t list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	num = 0;
	while (ptr->next != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	num++;
	return (num);

}
