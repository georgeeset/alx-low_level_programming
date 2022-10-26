#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node in list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p, *hd;

	hd = *head;
	if (!head)
		return;

	while ((p = hd) != NULL)
	{
		hd = p->next;
		free(p);
	}
	*head = NULL;
}
