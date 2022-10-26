#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node in list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p, hd;

	hd = *head;
	if (!hd)
		return;

	while (hd)
	{
		p = hd;
		hd = p->next;
		free(p);
	}
	*head = NULL;
}
