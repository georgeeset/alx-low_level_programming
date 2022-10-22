#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head:pointing to first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *h;

	h = head;
	if (head == NULL)
		return;
	while (h)
	{
		h = h->next;
		free(head);
		head = h;
	}
	free(head);
}
