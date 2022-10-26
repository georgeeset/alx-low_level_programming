#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node in list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p, *hd;

	if (head)
	{
		hd = *head;
		while (hd)
		{
			p = hd;
			hd = hd->next;
			free(p);
		}
		*head = NULL;
	}
}
