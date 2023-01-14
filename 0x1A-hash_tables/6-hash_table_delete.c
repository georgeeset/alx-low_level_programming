#include "hash_tables.h"

/**
 * free_linked_list - free linkedlist =
 * @head: pointer to linked list head
 */
void free_linked_list(hash_node_t *head)
{
	hash_node_t *h;

	h = head;
	if (!head)
		return;
	while ((h = head) != NULL)
	{
		head = head->next;
		free(h->key);
		free(h->value);
		free(h);
	}
}


/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **node_list;
	unsigned long int i;

	if (!ht)
		return;
	node_list = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (node_list[i])
		{
			free_linked_list(node_list[i]);
		}
	}
	free(ht->array);
	free(ht);
}
