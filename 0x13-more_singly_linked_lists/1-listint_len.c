#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: pointer to first node
 */

size_t listint_len(const listint_t *h)
{
	listint_t *pnt;
	size_t cnt = 0;

	if (! h)
		return (0);

	pnt = (listint_t *) h;
	while (pnt)
	{
		pnt = pnt->next;
		cnt++;
	}
	return (cnt);
}
