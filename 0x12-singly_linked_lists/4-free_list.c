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
	while ((h = head) != NULL)
	{
		head = head->next;
		free(h->str);
		free(h);
	}
}
