#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n)
 * of a list_t linked list
 * @head: first node of linked linst
 *Return: sum of all data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (sum);

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
