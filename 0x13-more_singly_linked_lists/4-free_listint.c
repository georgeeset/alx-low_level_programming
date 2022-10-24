#include "lists.h"

/**
 * free_listint - remove/ free a listint_t list.
 * @head: address of first node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (head)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->n);
			free(temp);
		}
	}
}
