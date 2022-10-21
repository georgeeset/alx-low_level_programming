#include "lists.h"

/**
 * print_list - prints all the lements of a list_t list
 * @h: pointer to the first list_t in the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *point;
	size_t i = 0;

	point = (list_t *) h;
	while (point != NULL)
	{
		if (point->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", point->len, point->str);

		point = point->next;
		i++;
	}
	return (i);
}
