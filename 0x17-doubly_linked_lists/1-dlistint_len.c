#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: head of list
 *
 * Return: size_t value of list length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *head = (dlistint_t *) h;

	/* first confirm that pointer is at the real head */
	while (head->prev)
	{
		head = head->prev;
	}

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
