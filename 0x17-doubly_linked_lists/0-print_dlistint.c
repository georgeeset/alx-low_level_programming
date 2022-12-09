#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t  *head = (dlistint_t *) h;

	if (h == NULL)
		return (0);

	while (head->prev)
	{
		head = head->prev;
	}

	while (head)
	{
		printf("%i\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
