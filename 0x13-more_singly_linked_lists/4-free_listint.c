#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head:pointing to first node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	if (head == NULL)
		return;
	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
