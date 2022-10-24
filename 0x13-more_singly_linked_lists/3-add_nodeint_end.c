#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 * of a listint_t list
 * @head: pointer to head
 * @n: value of new node
 * Return: pointer to newly created node
 * or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if ((head == NULL) || (*head == NULL))
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
