#include "lists.h"

/**
 * list_len - returns number of elements
 * in a linked list_t list
 * @h: pointing to head of linked list
 *
 * Return: size_t containing size of list
 */

size_t list_len(const list_t *h)
{
	list_t *point;
	size_t i = 0;

	point = (list_t *) h;
	while (point != NULL)
	{
		point = point->next;
		i++;
	}
	return (i);
}
