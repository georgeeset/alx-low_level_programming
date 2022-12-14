#include "lists.h"

/**
 * pop_listint - delete head mode of a listint_t list
 * @head: pointer to first node
 * Return: int value n of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	if (*head)
	{
		tmp = *head;
		data = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (data);
}
