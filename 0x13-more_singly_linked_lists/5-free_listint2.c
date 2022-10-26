#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first node in list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head == NULL || head == NULL)
		return;

	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = NULL;
}
