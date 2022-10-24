#include "lists.h"

/**
 * add_nodeint - adds a nre node at the begining of a listint
 * list
 * @head: pointer to list head
 * @n: value of node to be created
 * Return: NULL if failed or address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	if ((head == NULL) || (*head == NULL))
	{
		*head = ptr;
		return (ptr);
	}
	(*ptr).next = *head;
	*head = ptr;
	return (*head);
}
