#include "lists.h"

/**
 * pop_listint - delete head mode of a listint_t list
 * @head: pointer to first node
 * Return: int value n of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head && *head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return ((*head)->n);
	}
	return (0);
}
