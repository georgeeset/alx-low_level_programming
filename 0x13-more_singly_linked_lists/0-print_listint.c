#include "lists.h"

/**
 * print_listint - Prints all elements in a linked listint_t
 * @h: pointer to head of list
 * Return: size_t nmber of elments
 */

size_t print_listint(const listint_t *h)
{
	listint_t *p;
	size_t count = 0;

	if (h == NULL)
		return (0);

	p = (listint_t *) h;
	while (p != NULL)
	{
		printf("%i\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
