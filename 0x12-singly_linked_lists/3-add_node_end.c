#include "lists.h"

/**
 * add_node_end - adds new node to end
 * of list_t linked list
 * @head: pointing to start of list
 * @str: string data
 * Return: pointer to new node or NULL
 * if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *point;
	unsigned int i;

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	temp->str = strdup(str);
	temp->len = i;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		point = *head;
		while (point->next != NULL)
			point = point->next;

		point->next = temp;
	}
	return (*head);
}
