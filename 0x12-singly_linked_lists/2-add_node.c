#include "lists.h"

/**
 * add_node - adds new node to begining of list_t list
 * @head: first element in list_t list
 * @str: string data
 * Return: address of first element if successfull
 * NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	unsigned int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	while (str[length] != '\0')
		length++;
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}
