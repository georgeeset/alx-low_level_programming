#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head node address
 * @index: index of the node starting at 0
 * Return: node indexed node or null if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	ptr = head;
	while ((i < index) && ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
